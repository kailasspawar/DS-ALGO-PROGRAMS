import java.io.*;
import java.util.*;

class ArrayClassMethods 
{
	public static void main(String args[])throws Exception
	{
		int arr1[] = {1,4,2,5,6,8,3,5,11,34,12};
		float arr2[] = {1.23f,1.32f,0.5f,9.8f,4.6f,3.2f};
		String arr3[] = {"prem","raj","om","vilas","sai","khushi"};
		int i;
		Scanner in = new Scanner(System.in);
		Arrays.sort(arr1);
		System.out.println("Array after sorting");
		for(i=0;i<arr1.length;i++)
			System.out.println(arr1[i]);


		Arrays.sort(arr2);
		System.out.println("Array after sorting");
		for(i=0;i<arr2.length;i++)
			System.out.println(arr2[i]);


		Arrays.sort(arr3);
		System.out.println("Array after sorting");
		for(i=0;i<arr3.length;i++)
			System.out.println(arr3[i]);

		//Searching for an element in an array using binarySearch method of Arrays class

		System.out.println("Enter ele to search in first array");
		int ele = in.nextInt();
		int k = Arrays.binarySearch(arr1,ele);
		System.out.println(k);

		System.out.println("Enter ele to search in third array");
		String str = in.next();
		int p = Arrays.binarySearch(arr3,str);
		System.out.println(p);
	}
}
