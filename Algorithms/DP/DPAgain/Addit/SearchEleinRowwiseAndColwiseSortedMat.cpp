#include<iostream>
#define N 4
using namespace std;

void searchEle(int mat[N][N],int ele)
{
  int i = 0,j = N-1;
  while( i < N && j>= 0)
  {
    if(mat[i][j] == ele)
    {
      cout<<"Ele found at "<<i<<","<<j<<endl;
      return ;
    }
   if(mat[i][j] > ele)
    j--;
   else
    i++;
  }
 cout<<"Ele is Not found\n"<<endl;
}

int main()
{
  int mat[N][N] = {{10,20,30,40},
                   {15,25,35,45},
		   {27,29,37,48},
		   {32,33,39,50}};
  searchEle(mat,22);
 return 0;
}
