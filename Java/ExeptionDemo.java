import java.io.*;
import java.util.*;
class LargeNoException  extends Exception
{
  public String toString()
 {
  return("Largest no!");
 }
}
class SmallestNoException extends Exception
{
  public String toString()
 {
  return("Smallest no");
 }
}

class ExeptionDemo
{
  public static void main(String args[]) throws IOException
  {
    int a,b,c;
         int arr[] = new int[50];
     int i,n;int sum=0;int max=0;
   try
    { 
     Scanner in = new Scanner(System.in);
   System.out.println("Enter the values of a&b");
    a = in.nextInt();
      if(a>100)
       {
          throw new LargeNoException();
       }
      b = in.nextInt();
      if (b<10)
      {
        throw  new SmallestNoException();
      }
    c = a+b;
  System.out.println("Enter the size of array");
   n = in.nextInt();
  System.out.println("Enter the Array elements one by one");
  for(i=0;i<n;i++)
  {
     arr[i] = in.nextInt();
        sum+=arr[i];
     if (arr[i] > max)
        max = arr[i];
  }
 
System.out.println("The array elements are");
   for(i=0;i<n;i++)
   {
     System.out.print(arr[i]);
        System.out.print(" ");
   }
 System.out.println("\nThe sum of two nos is\n"+c);
   System.out.println("The maximum from array is\n"+max);
       System.out.println("The Sum of array elements is\n"+sum);
 }
 catch (Exception e)
  {
    System.out.println(e);
  }
 
 }
}
