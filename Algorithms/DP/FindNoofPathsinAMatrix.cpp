/*
Input: maze[R][C] =  {{0,  0, 0, 0},
                      {0, -1, 0, 0},
                      {-1, 0, 0, 0},
                      {0,  0, 0, 0}};
Output: 4
There are four possible paths as shown in
below diagram.
Given a maze with obstacles, count number of paths to reach rightmost-bottommost cell from topmost-leftmost cell. A cell in given maze has value -1 if it is a blockage or dead end, else 0.

From a given cell, we are allowed to move to cells (i+1, j) and (i, j+1) only.

*/

#include<iostream>
#define n 4
using namespace std;
//recursive implementation 
int countPaths(int mat[n][n],int i,int j)
{
  if(i > n-1 || j > n-1)
    return 0;
  if(i == n-1 && j == n-1)
    return 1;

  if(mat[i][j] == -1)
    return 0;

 return countPaths(mat,i+1,j) + countPaths(mat,i,j+1);
}
//Dynamic Implementation
int countPathsDp(int mat[n][n])
{
   if(mat[0][0] == -1)
    return 0;
  for(int i = 0;i<n;i++)
  {
    if(mat[i][0] == 0)
      mat[i][0] = 1;
    else 
       break;
  }

  for(int i = 1;i<n;i++)
  {
     if(mat[0][i] == 0)
      mat[0][i] = 1;
     else 
        break;
  }

  for(int i = 1;i<n;i++)
  {
   for(int j = 1;j<n;j++)
   {
     if(mat[i][j] == -1)
      continue;

     if(mat[i][j-1] > 0)
      mat[i][j] = (mat[i][j]+mat[i][j-1]);

     if(mat[i-1][j] > 0)
      mat[i][j] = (mat[i-1][j]+mat[i][j]);
   }
 }
 return (mat[n-1][n-1] > 0) ? mat[n-1][n-1] : 0;
}
int main()
{
  int mat[n][n] ={{0,  0, 0, 0},
                  {0, -1, 0, 0},
	          {-1, 0, 0, 0},
		  {0,  0, 0, 0}};

   cout<<countPaths(mat,0,0)<<endl;
      cout<<"Maximum count paths : "<<countPathsDp(mat)<<endl;
 return 0;
}
