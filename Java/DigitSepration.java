import java.util.*;
import java.io.*;
class DigitSepration
{
 public static void main(String args[])
 {
   int n,k;
   Scanner in = new Scanner(System.in);
   System.out.println("Enter No");
   n = in.nextInt();
   String str = String.valueOf(n);
   char ch[] = str.toCharArray();
   for(int i=0;i<ch.length;i++)
   {
     System.out.println(ch[i]);
   }
       System.out.println("Unit place Digit : "+ch[ch.length-1]);
}
} 
