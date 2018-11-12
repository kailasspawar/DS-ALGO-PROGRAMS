import java.io.*;
import java.util.*;
class MaxSumsubarray
{
      public static int maxsum(int a[],int n)
	{
		int i,maxs=0;
	       int maxsofar = 0;
		for(i=0;i<n;i++)

		{
			maxs+=a[i];
			if(maxs < 0)
				maxs = 0;

			if(maxsofar < maxs)
				maxsofar = maxs;
		}
		return maxsofar;
	}

	public static void main(String args[])throws Exception
	{
		int arr[] = {1,4,-4,-6,8,-2,-11,9,-3,4,-7};

		int k = maxsum(arr,arr.length);
		System.out.println("Maximum Sum:" +k);
	}
}


