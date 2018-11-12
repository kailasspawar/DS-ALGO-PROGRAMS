#include<iostream>
using namespace std;
void rotation(int a[][3])
{
 int i,j;
 int n = 3;int temp;
 for(i=0;i< n / 2;i++)
 {
  for(j=i;j< n - i - 1;j++)
  {
   temp = a[i][j];
   a[i][j] = a[n-j-1][i];
   a[n-j-1][i]=a[n-i-1][n-j-1];
   a[n-i-1][n-j-1] = a[j][n-i-1];
   a[j][n-i-1] = temp;
  }
 }
}
int main()
{
  
 int arr[3][3]= {{1,2,3},
 	       {4,5,6},
	       {7,8,9}};

    rotation(arr);

    for(int i=0;i<3;i++)
    {
     for(int j=0;j<3;j++)
     {
      cout<<arr[i][j]<<" ";
     }
     cout<<endl;
    }
  return 0;
 }
