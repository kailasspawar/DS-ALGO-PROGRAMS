#include<iostream>
#define r 4
#define c 4
using namespace std;

void  printZform(int mat[r][c])
{
  int i,j;

  for(i = 0;i<c;i++)
       cout<<mat[0][i]<<" ";
 cout<<endl;
  i = 1,j = c-2;

  while( i < c && j >=0)
  {
   cout<<mat[i][j]<<" ";
   i++;
   j--;
  }
  cout<<endl;
  for(i = 1;i<c;i++)
   cout<<mat[r-1][i]<<" ";
  cout<<endl;
}

int main()
{
  int mat[r][c] = { {1,2,3,4},
                    {5,6,7,8},
		    {9,10,11,12},
		    {13,14,15,16}};
    printZform(mat);
  return 0;
}

                    

