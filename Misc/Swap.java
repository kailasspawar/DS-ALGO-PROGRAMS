import java.io.*;
class Swap
{
   public static int  swap(int itself,int dummy)
   {
     return itself;
   }
 public static void main(String args[])
  {

   int a = 10, b = 50;

    a = swap(b,b=a);

   System.out.println("a = "+a + "b = "+b);
}
}
