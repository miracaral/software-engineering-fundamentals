object FunctionalSet {
  type Set = Int => Boolean

  def contains(set: Set, number: Int): Boolean = set(number)

  def empty(): Set = (x: Int) => false

  def singleton(number: Int): Set = (x: Int) => x == number

  def union(set1: Set, set2: Set): Set = {
    (x: Int) => contains(set1, x) || contains(set2, x)
  }

  def intersect(set1: Set, set2: Set): Set = {
    (x: Int) => contains(set1, x) && contains(set2, x)
  }

  def difference(set1: Set, set2: Set): Set = {
    (x: Int) => contains(set1, x) && !contains(set2, x)
  }

  def filter(set: Set, predicate: Int => Boolean): Set = {
    (x: Int) => contains(set, x) && predicate(x)
  }
}