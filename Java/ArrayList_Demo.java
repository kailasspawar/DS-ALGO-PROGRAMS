import java.util.*;
import java.io.*;
class ArrayList_Demo
{
	public static void main(String args[])throws IOException
	{
		int n,i,ele;
		System.out.println("How many nos?");
		Scanner in = new Scanner(System.in);
		ArrayList A = new ArrayList();
		n = in.nextInt();
		for(i=1;i<=n;i++)
		{
			ele = in.nextInt();
			A.add(ele);

		}
		System.out.println(max(A));
		System.out.println("@@@@@@@@@@@@@@@@@@@@@@@@@@@");
		Iterator it = A.iterator();
		while(it.hasNext())
		{
			System.out.println(it.next());
		}

		System.out.println("@@@@@@@@@@@@@@@@@@@@@@@@@@@");
		SortedSet S = new TreeSet();
		S.addAll(A);
		it = S.iterator();
		while(it.hasNext())
		{
			System.out.printf("%d\t",it.next());
		}
          }
}
