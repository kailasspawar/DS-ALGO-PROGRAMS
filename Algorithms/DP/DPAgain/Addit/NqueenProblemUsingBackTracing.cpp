#include<iostream>
#define N 8
using namespace std;
bool isSafe(int board[N][N],int row,int col)
{
  for(int i = 0;i<col;i++)
   if(board[row][i])
    return false;

  for(int i = row,j=col;i>=0&&j>=0;i--,j--)
   if(board[i][j])
    return false;

  for(int i = row,j=col;i<N&&j>=0;i++,j--)
   if(board[i][j])
    return false;

  return  true;
}
bool solveNqUtil(int board[N][N],int col)
{
  if(col >= N)
   return true;
 for(int i = 0;i<N;i++)
 {
  if(isSafe(board,i,col))
  {
    board[i][col] = 1;

    if(solveNqUtil(board,col+1))
     return true;

    board[i][col] = 0;
  }
 }
return false;
}
void solveNq()
{
  int board[N][N] = {{0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
		     {0,0,0,0,0,0,0,0},
		     {0,0,0,0,0,0,0,0},
		     {0,0,0,0,0,0,0,0},
		     {0,0,0,0,0,0,0,0},
		     {0,0,0,0,0,0,0,0},
		     {0,0,0,0,0,0,0,0}};
   solveNqUtil(board,0);
 for(auto &row : board)
 {
  for(auto i : row)
   cout<<i<<" ";
  cout<<endl;
 }
}
int main()
{
  solveNq();
 return 0;
}