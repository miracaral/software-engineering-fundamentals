object Main {
  def main(args: Array[String]): Unit = {

    println("--- 1. FUNCTIONAL SET TESTLERİ ---")

    val fSet1 = FunctionalSet.singleton(5)
    val fSet2 = FunctionalSet.singleton(10)

    val fUnion = FunctionalSet.union(fSet1, fSet2)

    println(s"fUnion contains 5: ${FunctionalSet.contains(fUnion, 5)}")
    println(s"fUnion contains 7: ${FunctionalSet.contains(fUnion, 7)}")

    val fEvens = FunctionalSet.filter(fUnion, x => x % 2 == 0)
    println(s"fEvens contains 5: ${FunctionalSet.contains(fEvens, 5)}")
    println(s"fEvens contains 10: ${FunctionalSet.contains(fEvens, 10)}")

    println("\n--- 2. OBJECTIVE SET (OOP) TESTLERİ ---")

    val emptySet = ObjectiveSetEmpty

    val objSet1 = emptySet.including(10).including(5).including(15)

    val objSet2 = emptySet.including(10).including(20)

    val objUnion = objSet1.union(objSet2)

    println(s"objUnion contains 5: ${objUnion.contains(5)}")
    println(s"objUnion contains 20: ${objUnion.contains(20)}")
    println(s"objUnion contains 99: ${objUnion.contains(99)}")

    val mappedSet = objUnion.map(x => x * 2)
    println(s"mappedSet contains 30: ${mappedSet.contains(30)}")

    print("objUnion elemanları: ")
    objUnion.foreach(x => print(s"$x "))
    println()
  }
}