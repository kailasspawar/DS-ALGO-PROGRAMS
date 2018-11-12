#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
int t = *a;
*a = *b;
*b = t;
}
	int partition(int arr[],int l,int h)
	{
	int pivot = arr[h];
	int i = (l-1);

	for(int j = l;j<=h-1;j++)
	{
	if(arr[j] <= pivot)
	{
	i++;
	swap(&arr[i],&arr[j]);
	}
	}
	swap(&arr[i+1],&arr[h]);
	return (i+1);
	}
	void quickSort(int arr[],int l,int h)
	{
	if(l < h)
	{
	int p = partition(arr,l,h);
	quickSort(arr,l,p-1);
	quickSort(arr,p+1,h);
	}
	}
	/*
int partition (int arr[], int l, int h)
{
	int x = arr[h];
	// pivot
	int i = (l - 1); // Index of smaller element
	for (int j = l; j <= h- 1; j++)
	{
		// If current element is smaller than or equal to pivot
		if (arr[j] <= x)
		{
			i++;
			// increment index of smaller element
			swap(&arr[i], &arr[j]); // Swap current element with index
		}
	}
	swap(&arr[i + 1], &arr[h]);
	return (i + 1);
}
void quickSort(int arr[], int l, int h)
{
	if (l < h)
	{
		int p = partition(arr, l, h); 
		quickSort(arr, l, p - 1);
		quickSort(arr, p + 1, h);
	}
}*/
int main()
{ 
	int arr[] = {5,1,7,98,4,12,54,14};
	int n = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,n-1);
	for(int i : arr)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}

