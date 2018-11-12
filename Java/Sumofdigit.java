import java.io.*;

class Sumofdigit
 {
   public static void main(String args[])throws IOException
   {
     int n,sum=0;
     
     n=Integer.parseInt(args[0]);
 
    while(n>0)
    {
      int d= n%10;
        sum+=d;
       n/=10;
    }

  System.out.println("sum of digits of given no is"+sum);
  
   }
}
