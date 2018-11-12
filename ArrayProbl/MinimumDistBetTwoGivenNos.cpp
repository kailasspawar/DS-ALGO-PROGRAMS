#include<iostream>
#include<climits>
using namespace std;
//O(n*n) solution brute force approach................../////
int minDist(int arr[],int n,int x,int y)
{
	int i , j ,mindis = INT_MAX;
	int min1 = INT_MAX;

	for(i = 0;i < n-1;i++)
	{
		for(j = i+1;j<n;j++)
		{
			if(arr[i]==x&&arr[j]==y)
			{
				if((j-i) < mindis)
					mindis = (j-i);
			}
			if(arr[i]==y&&arr[j]==x)
			{
				if((j-i) < min1)
					min1 = (j-i);
			}
		}
	}

	return min(mindis,min1);
}

//O(n) solution maintaining the prev element...........//
int minDistance(int arr[],int n,int x,int y)
{
	int i,j,prev,min1 = INT_MAX;
	for(i = 0;i < n;i++)
	{
		if(arr[i]==x||arr[i]==y)
		{
			prev = i;
			break;
		}

	}  
	for(;i<n;i++)
	{
		if(arr[i]==x||arr[i]==y)
		{
			if(arr[prev]!=arr[i]&&(i-prev) < min1)
			{
				min1 = i - prev;
				prev = i;
			}
			else
				prev = i;
		}
	}
	return min1;
}

int main()
{
	int arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<minDist(arr,n,4,2)<<endl;
             cout<<minDistance(arr,n,3,6)<<endl;
	return 0;
}
