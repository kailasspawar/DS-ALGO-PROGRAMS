import java.util.*;
class FormattingOutput
{
  public static void main(String args[])
  {
    int a,b;
   String str;

   Scanner in = new Scanner (System.in);
  
    System.out.println("enter two integer values");
    a = in.nextInt();
    b = in.nextInt();
   str = in.nextLine();
  System.out.printf("%15d\n",a);

 }
}
