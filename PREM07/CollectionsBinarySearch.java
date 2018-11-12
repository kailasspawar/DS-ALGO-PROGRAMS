import java.io.*;
import java.util.*;
class CollectionsBinarySearch
{
  public static void main(String args[])throws Exception
  {
    LinkedList A = new LinkedList();
    A.add(10);A.add(12);
    A.add(20);A.add(92);
    A.add(21);A.add(32);
    A.add(41);A.add(17);
    A.add(37);A.add(25);
   int arr[] = {2,5,7,8,89,1,45,23};
   Scanner in = new Scanner(System.in);  
   int k = in.nextInt();
   String ss = Integer.toBinaryString(k);
   System.out.println(ss);
   String val = "101001";
   int p = Integer.parseInt(val,2);
   System.out.println(p);
  // Collections.sort(A);
    Arrays.sort(arr);
   int s =  Arrays.binarySearch(arr,k);
  // int s = Collections.binarySearch(A,k);
   if(s<0)
      System.out.println("Ele is not fount");
   else
      System.out.println("ele at pos: "+s);
  }
}
    
