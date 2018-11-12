import java.io.*;
import java.util.*;
class PatternDemo
{
 public static void main(String args[])throws IOException
  {
     int i,j;
    int m,n;
/**   System.out.println("enter how many lines");
   Scanner in = new Scanner (System.in);
   n = in.nextInt();
   System.out.println("enter how many columns");
   m = in.nextInt();
**/
   
   for(i=1;i<=5;i++)
   {
       
          // System.out.print("\t");
      for(j=5;j>=i;j--)
       {
         System.out.print("*");

        }
            System.out.println("\t*");
       
   }
}
}
