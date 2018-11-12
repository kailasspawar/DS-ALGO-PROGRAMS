import java.io.*;

class MaxSumSubArr
{
	public static int maxsum(int arr[],int len)
	{
		int max_sum = 0;
		int curr_sum = 0;
		for (int i : arr)
		{
			curr_sum += i;
			if(curr_sum < 0)
				curr_sum = 0;

			if(curr_sum > max_sum)
				max_sum = curr_sum;
		}
	  return max_sum;
	}
	public static void main(String args[])throws IOException
	{
             int arr[] = {1,5,-3,9,-5,0,-7};
	     System.out.println("The maxsum is"+MaxSumSubArr.maxsum(arr,arr.length));
	}
}
