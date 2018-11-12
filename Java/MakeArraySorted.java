import java.io.*;
import java.util.*;

class MakeArraySorted
{
      void sortArray(int arr[],int l,int h)
      {
	      for(int i = l+1;i<=h;i++)
	      {
		      for(int j = l;j<h-i;j++)
		      {     
			     if(arr[j] > arr[j+1]){
			      int temp = arr[j] ;
			      arr[j] = arr[j+1];
			      arr[j+1] = temp;
			     }
		      }
	      }
      }
      void makeArraySorted(int arr[],int n)
      {
	      int i = 0 , j = n-1;

	      while(i < n-1)
	      {
		      if(arr[i] > arr[i+1])
			      break;
		      i++;
	      }
	      if(i == n-1)
		      System.out.println("Whole array is sorted");
	      else
	      {
		    while(j > 0)
		    {
			    if(arr[j] < arr[j-1])
				    break;
		            j--;
	            }

	      }
                 sortArray(arr,i,j);
		 for(int k = 0;k<n;k++)
			 System.out.print(arr[k]+" ");
		 System.out.println("");
      }
     public static void main(String args[])
     {
	     int arr[] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
	     int n = arr.length;
	     MakeArraySorted m = new MakeArraySorted();
	     m.makeArraySorted(arr,n);
	  //   m.sortArray(arr,0,n-1);
     }
}
