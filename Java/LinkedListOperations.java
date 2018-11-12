import java.io.*;
import java.util.*;

class LinkedListOperations
{
	public static void main(String args[])throws IOException
	{

		LinkedList L1 = new LinkedList();
		LinkedList L2 = new LinkedList();
		Scanner in = new Scanner(System.in);
		int ele;
		int i,n;
		System.out.println("How many elements?");
		n = in.nextInt();
		for( i= 1;i<=n;i++)
		{
			ele = in.nextInt();
			L1.add(ele);
		}
		ListIterator lit = L1.listIterator();
		System.out.println("*******************************************************");
		while(lit.hasNext())
		{
			System.out.println(lit.next());
		}

		System.out.println("*******************************************************");
		System.out.println("The indexof ele 30 is :"+L1.indexOf(30));
		System.out.println("The indexof ele 30 is :"+L1.lastIndexOf(20));

		System.out.println("*******************************************************");
		L1.set(3,78);
 		System.out.println(L1);
		System.out.println("*******************************************************");
		 L1.subList(2,5);
	        System.out.println(L1);
	}
}

