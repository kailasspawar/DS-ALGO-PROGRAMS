#include<iostream>
#include<algorithm>
using namespace std;
void partition(int arr[],int n,int low,int high)
{
	int start = 0,end = n-1;
	for(int i = 0;i<=end;)
	{
		if(arr[i] < low)
			swap(arr[i++],arr[start++]);

		else if(arr[i] > high)
			swap(arr[i],arr[end--]);

		else
			i++;
	}
}

int main()
{

	int arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87,
		98, 3, 1, 32};
	int n = sizeof(arr)/sizeof(arr[0]);

	partition(arr, n, 10, 20);

	cout << "Modified array \n";
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";

  return 0;
}
