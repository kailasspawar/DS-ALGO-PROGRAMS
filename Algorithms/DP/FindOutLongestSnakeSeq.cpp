#include<bits/stdc++.h>
#define m 4
#define n 4
using namespace std;
struct point
{
  int x,y;
};
list<point> findPath(int look[m][n],int mat[m][n],int i,int j)
{
  list<point>path;
  point pt = {i,j};
  path.push_front(pt);
  while(look[i][j]!=0)
  {
    if(i > 0 && look[i][j]-1 == look[i-1][j])
    {
      pt = {i-1,j};
      path.push_front(pt);
      i--;
    }
    else if(j > 0 && look[i][j]-1==look[i][j-1])
    {
      pt = {i,j-1};
      path.push_front(pt);
      j--;
    }
  }
  return path;
}
void findSnakeseq(int mat[m][n])
{

  int lookup[m][n];
  int max_len = 0,max_row = 0,max_col = 0;
  memset(lookup,0,sizeof(lookup));
  for(int i = 0;i<m;i++)
  {
    for(int j = 0;j<n;j++)
    {
      if(i || j)
      {
        if( i > 0 && abs(mat[i-1][j]-mat[i][j])==1)
	{
	  lookup[i][j] = max(lookup[i][j],lookup[i-1][j]+1);
	  if(max_len < lookup[i][j])
	  {
	   max_len = lookup[i][j];
	     max_row = i;
	       max_col = j;
	  }
	}
	if(j > 0 && abs(mat[i][j]-mat[i][j-1])==1)
	{
	  lookup[i][j] = max(lookup[i][j],lookup[i][j-1] + 1);
	  if(max_len < lookup[i][j])
	  {
	   max_len = lookup[i][j];
	     max_row = i;
	     max_col = j;
	  }
       }
     }
  }
 }
      cout<<"lenght of maximum snake seq is "<<max_len<<endl;
      list<point> path ;
   path = findPath(lookup,mat,max_row,max_col); 
 cout<<"seq is :";
 for(auto it = path.begin();it!=path.end();it++)
   cout<<endl<<mat[it->x][it->y]<< " ("<<it->x<<", "<<it->y<<")";
 cout<<endl;
 }
int main()
{
  int mat[m][n] = {{9,6,5,2},
  	           {8,7,6,5},
		   {7,3,1,6},
		   {1,1,1,7}};
	findSnakeseq(mat); 
  return 0;
}
