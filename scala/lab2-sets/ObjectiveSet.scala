abstract class ObjectiveSet {
  def contains(number: Int): Boolean
  def including(number: Int): ObjectiveSet
  def excluding(number: Int): ObjectiveSet
  def union(set: ObjectiveSet): ObjectiveSet
  def intersection(set: ObjectiveSet): ObjectiveSet
  def difference(set: ObjectiveSet): ObjectiveSet
  def filter(predicate: Int => Boolean): ObjectiveSet
  def map(transform: Int => Int): ObjectiveSet
  def forall(predicate: Int => Boolean): Boolean
  def foreach(loopFunction: Int => Unit): Unit
}

object ObjectiveSetEmpty extends ObjectiveSet {

  def contains(number: Int): Boolean = false

  def including(number: Int): ObjectiveSet =
    new ObjectiveSetNode(number, ObjectiveSetEmpty, ObjectiveSetEmpty)

  def excluding(number: Int): ObjectiveSet = this

  def union(set: ObjectiveSet): ObjectiveSet = set

  def intersection(set: ObjectiveSet): ObjectiveSet = this

  def difference(set: ObjectiveSet): ObjectiveSet = this

  def filter(predicate: Int => Boolean): ObjectiveSet = this

  def map(transform: Int => Int): ObjectiveSet = this

  def forall(predicate: Int => Boolean): Boolean = true

  def foreach(loopFunction: Int => Unit): Unit = ()
}

class ObjectiveSetNode(val value: Int, leftChild: ObjectiveSet, rightChild: ObjectiveSet) extends ObjectiveSet {

  def contains(number: Int): Boolean = {
    if (number < value) leftChild.contains(number)
    else if (number > value) rightChild.contains(number)
    else true
  }

  def including(number: Int): ObjectiveSet = {
    if (number < value)
      new ObjectiveSetNode(value, leftChild.including(number), rightChild)
    else if (number > value)
      new ObjectiveSetNode(value, leftChild, rightChild.including(number))
    else
      this
  }

  def excluding(number: Int): ObjectiveSet = {
    if (number < value)
      new ObjectiveSetNode(value, leftChild.excluding(number), rightChild)
    else if (number > value)
      new ObjectiveSetNode(value, leftChild, rightChild.excluding(number))
    else
      leftChild.union(rightChild)
  }

  def union(set: ObjectiveSet): ObjectiveSet = {

    leftChild.union(rightChild.union(set.including(value)))
  }

  def intersection(set: ObjectiveSet): ObjectiveSet = {
    val intersectedChildren = leftChild.intersection(set).union(rightChild.intersection(set))
    if (set.contains(value)) intersectedChildren.including(value)
    else intersectedChildren
  }

  def difference(set: ObjectiveSet): ObjectiveSet = {
    val differencedChildren = leftChild.difference(set).union(rightChild.difference(set))
    if (!set.contains(value)) differencedChildren.including(value)
    else differencedChildren
  }

  def filter(predicate: Int => Boolean): ObjectiveSet = {
    val filteredChildren = leftChild.filter(predicate).union(rightChild.filter(predicate))
    if (predicate(value)) filteredChildren.including(value)
    else filteredChildren
  }

  def map(transform: Int => Int): ObjectiveSet = {
    leftChild.map(transform).union(rightChild.map(transform)).including(transform(value))
  }

  def forall(predicate: Int => Boolean): Boolean = {
    predicate(value) && leftChild.forall(predicate) && rightChild.forall(predicate)
  }

  def foreach(loopFunction: Int => Unit): Unit = {
    leftChild.foreach(loopFunction)
    loopFunction(value)
    rightChild.foreach(loopFunction)
  }
}