import scala.util.control.Breaks
val b = new Breaks

println("窓は閉めましたよね? (y/n)")
b.breakable {
  val c = io.StdIn.readLine()
  if (!(c.equals("y"))) {
    println("窓を閉めてください。鳩が入ります")
  }
  else {
    b.break
  }
}
print("お疲れ様でした")