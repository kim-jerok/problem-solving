fun inputIntPair(): Pair<Int, Int> {
    val inputIntList = readln()
        .split(" ")
        .map { it.toInt() }
    return Pair(inputIntList[0], inputIntList[1])
}

fun main() {
    val t = readln().toInt()

    repeat(t) {
        val (a, b) = inputIntPair()
        println(a + b)
    }
}
