import java.io.*;

class cmdljava
{
  public static void main(String args[])throws IOException
  {
     int a,b,c,max;
      double avg;

     a=Integer.parseInt(args[0]);
	
     b =Integer.parseInt(args[1]);
	
     c =Integer.parseInt(args[2]);

	avg =(a+b+c)/3;

     if(a>b)
         max=a;
     else
         max=b;
     if(c>max)
         max=c;

   System.out.println("maximum no is "+max);
   System.out.println("avg is "+avg);
  }

}
