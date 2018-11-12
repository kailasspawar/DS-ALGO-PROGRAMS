import java.io.*;
import java.util.*;
class Counter
{
 public static void main(String args[])
 {
   Scanner in = new Scanner(System.in);
   int t,i;
   t = in.nextInt();
   int cnt = 3;
   int x = 0;
   for(i=1;i<=10000;i++)
   { 
     if(i%3==0)
       x+=3;

     if(i==t)
      System.out.println(cnt);
     else if(cnt==1)
        cnt = x*2;
     else 
        cnt--;
   }
 }
}
