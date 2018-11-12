#include<stdio.h>

void preprocess(int arr[],int n,int temp[])
{
  for(int i = 0; i < n;i++)
   temp [i] = temp[i+n] = arr[i];

}

void rotations(int temp[],int k,int n)
{
  int start = k%n;
  for(int i = start;i < start+n;i++) 
   printf("%d ",temp[i]);
  printf("\n");  
}

int main()
{
  int arr[]= {1,2,5,7,9};
 int n = sizeof(arr)/sizeof(arr[0]);
  int temp[2*n];
  int k;
 preprocess(arr,n,temp);
   k = 2;
 rotations(temp,k,n); 
   k = 3;
 rotations(temp,k,n);
   k = 5;
 rotations(temp,k,n);
  
 return 0;
}
 
