#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
	int n1 = m- l + 1;
	int n2 = r - m;
	int L[n1],R[n2];
	int i,j,k;
	for(i = 0;i<n1;i++)
		L[i] = arr[l+i];

	for(j = 0;j<n2;j++)
		R[j] = arr[m+1+j];

	i = 0,j = 0,k = l;
	while(i < n1 && j < n2)
	{
		if(L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while(i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while(j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergesort(int arr[],int l,int r)
{
	if(l < r)
	{
		int m = (l+r)/2;

		mergesort(arr,l,m);
		mergesort(arr,m+1,r);

		merge(arr,l,m,r);
	}
}
void printArray(int arr[],int n)
{
	for(int i = 0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
int main()
{
	int arr[] = {12, 11, 13, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before Sorting Array is \n";
	printArray(arr,n);
	cout<<"After Sorting Array is \n";
	mergesort(arr,0,n-1);
	printArray(arr,n);

	return 0;
}

