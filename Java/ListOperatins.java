import java.io.*;
import java.util.*;
class ListOperations
{
   public static void main(String args[])
   {
     int i,n,ele;
     LinkedList L1 = new LinkedList();
    
    Scanner in = new Scanner(System.in);
     LinkedList L2 = new LinkedList();
       LinkedList L3 = new LinkedList();
    System.out.println("How many elements to add on first list");
    n = in.nextInt();
     for(i=0;i<n;i++)
      ele = in.nextInt();
       L1.add(ele);

    System.out.println("Enter elements in second list");
     int n2 = in.nextInt();
    for(i=0;i<n2;i++)
      ele=in.nextInt();
       L2.add(ele);
       
   System.out.println("First list is");
    System.out.println(L1);
   System.out.println("Second list is");
    System.out.println(L2);
   System.out.println("Reverse of list1 is");
    L3.reverseAll(L1);
   System.out.println(L3);
  System.out.println("Sorted second list is");
    L3 = L2.sort();
   System.out.println(L3);
  }
}
