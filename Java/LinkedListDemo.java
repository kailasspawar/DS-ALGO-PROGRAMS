import java.util.*;
import java.io.*;

class LinkedListDemo
{
  public static void main(String args[])throws IOException
  {
    LinkedList L = new LinkedList();
     Scanner in = new Scanner(System.in);  
      L.add(20);
 	L.add(30);
	 L.add(40);
	   L.add(50);
	    L.add(60);
     int sum=0;
     System.out.println(L);
   ArrayList A = new ArrayList();
      int i,n,ele;
    System.out.println("how many nos");
    n = in.nextInt();
    for(i=0;i<n;i++)
    {
       System.out.println("Enter Array Element");
        ele = in.nextInt();
       A.add(ele);
           sum+=ele;
    }
 
    System.out.println("The Array elements are");
    Iterator it = A.iterator();
     while (it.hasNext())
        System.out.println(it.next());
   //   System.out.println(A);
          System.out.println("Sum of Array elements is" +sum);
   //Addition of two linked lists.........
    LinkedList L1 = new LinkedList();
    System.out.println("How many elements");
    int n1 = in.nextInt();
    System.out.println("Enter the List elements");
    for(i=0;i<n1;i++)
    {
       ele = in .nextInt();
        L1.add(ele); 
    }
   
   LinkedList L2 = new LinkedList();
   
   L2.addAll(L);
      L2.addAll(L1);
   L2.add("prem");
     L2.add("rahul");
   System.out.println(L2);
// sorted set interface...............
 SortedSet S1 = new TreeSet();
    System.out.println("How many names You wanted to sort");
    int n2 = in.nextInt();
    String str=null;
   System.out.println("Enter names");
    for(i=1;i<=n2;i++)
    {
     str = in.nextLine();
      S1.add(str);
    }
  System.out.println(S1);
  } 
}
