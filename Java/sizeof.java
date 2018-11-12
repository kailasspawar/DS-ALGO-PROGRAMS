import java.io.*;
import java.util.*;
class sizeof
{
 public static void main(String args[])throws IOException
  {
     long no;int k,i ;
   Scanner in= new Scanner(System.in);
  System.out.println("How many cases");
   k = in.nextInt();
  for(i=0;i<k;i++)
  {
      System.out.println("enter long");
   no = in.nextLong();
 
   if(no>=-128 && no<=127)
   {
     System.out.println(no+"is fitted in:");
      System.out.println("* byte");
   }
   else if(no>=-32768 && no<=32767)
   {
      System.out.println(no+"is fitted in:");
      System.out.println("* short");
      System.out.println("* int");
      System.out.println("* long");
   }
   else if(no>=-2147483648 && no<=2147483647)
   {
       System.out.println(no+"is fitted in:");
       System.out.println("* int");
      System.out.println("* long");
   }
   else
   {
        System.out.println(no+"is fitted in:");
       System.out.println("* long");
     
   }
}

 

}
}

