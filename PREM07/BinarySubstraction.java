import java.io.*;
import java.util.*;
class BinarySubstraction
{
 public static void main(String args[])throws Exception
 {
   int r,k,d;
   String str;
   String ss;
   Scanner in = new Scanner(System.in);
   System.out.println("Enter binary string");
   str = in.nextLine();
   String rk[] = str.split("-");
    r = Integer.parseInt(rk[0],2);
    k = Integer.parseInt(rk[1],2);
   int s = r-k;
//   System.out.println(s);
   if(s<0)
   {
      d = Math.abs(s);
      // System.out.println(d);
      ss = "-"+(Integer.toBinaryString(d));
   }
   else
    ss = Integer.toBinaryString(s);
   
   System.out.println(ss);
 }
}
