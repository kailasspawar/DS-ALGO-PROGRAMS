import java.io.*;

class BinarySearch
{
	boolean search(int arr[],int l,int r,int ele)
	{
		if(l > r)
			return false;

		int mid = (l + r) / 2;

		if(arr[mid] == ele)
			return true;
		if(arr[mid] < ele)
			return search(arr,mid+1,r,ele);
		else
			return search(arr,l,mid-1,ele);
        }
    
	public static void main(String args[])
	{
		int arr[] = {5,6,7,12,25,34,45};
	    BinarySearch b = new BinarySearch();	
		if(b.search(arr,0,arr.length - 1,27) == true) 
			System.out.println("Ele found");
		else
		   System.out.println("Not found") ;
	}
}	
