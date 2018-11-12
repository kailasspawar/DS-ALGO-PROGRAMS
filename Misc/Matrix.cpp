#include<iostream>
using namespace std;

int main()
{
  int arr[3][3] = {{1,2,3},
		   {4,5,6},
		   {7,8,9}};
   
   for(auto &row : arr)
   {
     for(auto col : row)
      cout<<col<<" ";
    cout<<endl;
   }
 return 0;
}
