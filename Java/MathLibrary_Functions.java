import java.io.*;
import java.lang.*;
import java.util.*;
class MathLibrary_Functions
{
 public static void main(String args[])throws IOException
 {
   int a = 10,b = 63;
   float c = 15.30f,f = 78.603f;
    double d = 1256.235,e = -639854.36;
   long l = 1256489541;

   System.out.println("The absolute value of double is :"+Math.abs(e));
   System.out.println("The power of Given no is :"+Math.pow(2,10));
   System.out.println("Maximum from Given Two digits :"+Math.max(a,b));
   System.out.println("Minimum from Given Two Float values :"+Math.min(c,f));
   System.out.println("The floor Value of double d is :"+Math.floor(d));
   System.out.println("The ceiling Value of double d is :"+Math.ceil(d));
   System.out.println("The Rounded Value of double d is :"+Math.round(d));
   System.out.println("The Exponential Value of Float c is :"+Math.exp(c));
   System.out.println("The Logarithmic Value of double d is :"+Math.log(d));
  
  }
}
