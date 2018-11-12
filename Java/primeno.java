import java.io.*;

 class primeno
 {
   public static void main(String args[])throws IOException
    {
       int no;
      no=Integer.parseInt(args[0]);
       if(isPrime(no))
       System.out.println(no+"is prime no");
       else
       System.out.println(no+"is not prime no");
    }
   
  static boolean isPrime(int no)
   {
     for(int i=2;i<=no/2;i++)
      {
        if(no % i==0)
         return (false);
      }
    return(true);
  }

}
