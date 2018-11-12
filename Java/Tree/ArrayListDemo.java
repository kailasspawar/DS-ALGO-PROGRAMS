import java.util.*;

class ArrayListDemo
{
	public static void main(String args[])
	{
		ArrayList<Integer> A = new ArrayList<Integer>();

		for(int i = 10;i >=1;i--)
			A.add(i);

	     Collections.sort(A);	
		System.out.println(A);
        }
}
		
