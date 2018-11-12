#include<iostream>
#include<stdlib.h>
#define m 4
#define n 4
using namespace std;

int count(int i,int j,int mat[m][n])
{
  if(abs(mat[i][j]-mat[i+1][j]) > 1
     &&abs(mat[i][j]-mat[i][j+1]) > 1)
    return 0;

  if(abs(mat[i][j]-mat[i+1][j])==1
     || abs(mat[i][j]-mat[i][j+1])==1)
   return 1+ max(count(i+1,j,mat),count(i,j+1,mat));

  return count(i,j+1,mat) + count(i+1,j,mat);
}

int main()
{
 int mat[m][n] = {{9,6,5,2},
 		  {8,7,6,5},
		  {7,3,1,6},
		  {1,1,1,7}};
    cout<<count(0,0,mat)<<endl;
  return 0;
}
