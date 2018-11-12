#include<iostream>
#include<stack>
using namespace std;
/*For Example 
A = {10, 15, 25}
B = {1, 5, 20, 30}

The resulting arrays are:
  10 20
  10 20 25 30
  10 30
  15 20
  15 20 25 30
  15 30
  25 30
*/
void printArr(int arr[],int n)
{
 for(int i =0 ;i<n;i++)
  cout<<arr[i]<<" ";
 cout<<endl;
}
void generateUtil(int a[],int b[],int c[],int i,int j,int m,int n,int len,bool flag)
{
  if(flag)
  {
    if(len)
      printArr(c,len+1);
    for(int l = i;l<m;l++)
    {
    if(!len)
    {
     c[len] = a[l];
     generateUtil(a,b,c,l+1,j,m,n,len,!flag);
    }
    else
    {
      if(a[l] > c[len])
      {
       c[len+1] = a[l];
       generateUtil(a,b,c,l+1,j,m,n,len+1,!flag);
      }
    }
  }
 }
 else
 {
   for(int k = 0;k<n;k++)
   {
    if(b[k] > c[len])
    {
     c[len+1] = b[k];
     generateUtil(a,b,c,i,k+1,m,n,len+1,!flag);
    }
   }
 }
}
   
   
void generateSorted(int a[],int b[],int m,int n)
{
  int c[m+n];
    generateUtil(a,b,c,0,0,m,n,0,true);
}

int main()
{

    int A[] = {10, 15, 25};
        int B[] = {5, 20, 30};
	    int n = sizeof(A)/sizeof(A[0]);
	        int m = sizeof(B)/sizeof(B[0]);
		    generateSorted(A, B, n, m);
		        return 0;
}
