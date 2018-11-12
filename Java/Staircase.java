import java.io.*;
import java.util.*;
class Staircase
{
 public static void main(String args[])
  {
     int n ;
    Scanner in = new Scanner(System.in);
    n = in.nextInt();
    int i,j;
    for(i=1;i<=n;i++)
    {
      for(j=i+1;j<=n;j++)
       System.out.print("*");

      for(int k=1;k<=i;k++)
        System.out.print("#");

      System.out.print("\n");
    }
}
}
