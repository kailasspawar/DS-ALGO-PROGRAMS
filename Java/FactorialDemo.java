import java.io.*;

class FactorialDemo
{
  public static void main(String args[])throws IOException
  {
   
     int no,fact=1;
   BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
     System.out.println("enter the no");
     no = Integer.parseInt(br.readLine());
  
    for(int i=1;i<=no;i++)
    {
      fact*=i;
     System.out.println(fact * i);
    }
   
  System.out.println("the Factorial is"+fact);
 
}
}




