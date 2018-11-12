import java.io.*;
import java.util.*;
class QuickSort
{
	public static void swap(int a,int b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	static int partition(int a[],int lb,int ub)
	{
		int j,i,pivot;
		i = lb-1;
		pivot = a[ub];
		for(j = lb;j<ub;j++)
		{
			if(a[j]<=pivot)
			{
				i++;
				swap(a[i],a[j]);
			}
		}
		swap(a[i+1],pivot);
		return (i+1);
	}

	static void quickSort(int a[],int lb,int ub)
	{
		int part;
		if(lb<ub)
		{
			part = partition(a,lb,ub);

			quickSort(a,lb,part-1);
			quickSort(a,part+1,ub);
		}
	}
	public static void main(String args[])
	{
		int i,n;
		int a[] = new int[20];
		Scanner in = new Scanner(System.in);
		System.out.println("Enter how many elements\n");
		n = in.nextInt();
		for(i=0;i<n;i++)
		{
			a[i] = in.nextInt();
		}

		System.out.println("After Sorting array is\n");
		quickSort(a,0,n-1);
		for(i=0;i<n;i++)
		{
			System.out.println(a[i]);
		}

	}
}
