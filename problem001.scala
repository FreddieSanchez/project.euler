package project.euler

object Problem0001 extends App {
  println ("Project Euler - problem 001")
  println ((1 until 1000).filter((x: Int )=> { x % 3 == 0 || x % 5 == 0}).sum)
}
