import java.io.*;
import java.util.*;
class Matrix
{
 public static void main(String args[])
 {
   int n;
//   System.out.println("Enter order of matix");
//   n = in.nextInt();
   Scanner in = new Scanner(System.in);
 //  int a[][]=new int[4][4];
   int i,j;
   int sum1 = 0,sum=11;
//   System.out.println("Enterthe matix");
//   for(i=0;i<4;i++)
//   for(j=0;j<4;j++)
//    a[i][j]=in.nextInt();
   int a[][]={
   		{1,3,2,4},
                {5,8,7,6},
		{9,10,13,11},
		{12,0,14,15},
	     };
   
   for(i=0;i<4;i++)
    {
      for(j=0;j<4;j++)
      {
        System.out.print(a[i][j]+" "); 
//	 System.out.print(" ");
      }
     System.out.print("\n");
    }
   for(i=0;i<4;i++)
    {
      for(j=0;j<4;j++)
      {
        for(int k=0;k<4;k++)
          if((a[i][j]+a[j][k])==sum)
	  {
           System.out.println("("+a[i][j]+","+a[j][k]+")"); 
	    break;
	  }

      }
   //  System.out.print("\n");
    }
 }
}
