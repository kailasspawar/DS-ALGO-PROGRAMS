import java.util.*;
class DataStructures
{
	public static void main(String args[])
	{
		ArrayList A = new ArrayList();
		LinkedList L1 = new LinkedList();
		SortedSet S = new TreeSet();

//		HashTable ht = new HashTable();

		A.add(10);A.add(81);
		A.add(20);A.add(31);
		A.add(13);A.add(21);
		A.add(16);A.add(71);
		A.add(10);A.add(91);

		LinkedList L2 = new LinkedList();

		L1.add('k');L1.add('a');
		L1.add('i');L1.add('l');
		L1.add('a');L1.add('s');
		L1.add('p');L1.add('a');
		L1.add('w');L1.add('a');
		L1.add('r');

		L2.addAll(A);

		System.out.println(A);
		System.out.println(L1);
		System.out.println(L2);
             
	}
}
