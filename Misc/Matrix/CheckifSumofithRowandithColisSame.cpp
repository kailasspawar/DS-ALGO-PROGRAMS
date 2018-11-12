#include<iostream>
#define r 4
#define c 4
using namespace std;

bool check(int arr[r][c])
{

  for(int i = 0;i<r;i++)
  {
   int sum1 = 0,sum2 = 0;
   for(int j = 0;j<c;j++)
   {
     sum1+= arr[i][j];
        sum2+=arr[j][i];
   }
   if(sum1 == sum2)
   { 
     cout<<sum1-sum2<<endl;
       return true;
    }
 }
 return false;
}

int main()
{
  int arr[r][c] = {{1,2,3,4},
   		   {9,5,3,1},
		   {0,3,5,6},
		   {0,4,5,6}};
	 if(check(arr))
	   cout<<"Yes\n";
	 else
	   cout<<"No\n";
   return 0;
}
