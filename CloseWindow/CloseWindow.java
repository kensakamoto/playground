import java.util.Scanner;

public class CloseWindow{
   public static void main(String[] args){
     System.out.println("窓は閉めましたよね? (y/n)");
     while(true){
      Scanner scan = new Scanner(System.in);
      String c = scan.next();
      if (!(c.equals("y"))) {
        System.out.println("窓を閉めてください。鳩が入ります。");
      }
      else {
        break;
      }
     }
     System.out.println("お疲れ様でした。");
   }
}