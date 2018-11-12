#include<iostream>
#define n 4
using namespace std;

int noofEndlessPoints(int mat[n][n])
{
   int row[n][n] ;
      int col[n][n];

   for(int i = 0;i<n;i++)
   {
     int endless = 1;
     for(int j = n-1;j>=0;j--)
     {
       if(mat[j][i]==0)
         endless = 0;
       col[j][i] = endless;
    }
  }

 for(int i = 0;i<n;i++)
 {
   int endless = 1;
   for(int j = n-1;j>=0;j--)
   {
    if(mat[i][j] == 0)
      endless = 0;
    row[i][j] = endless;
   }
 } 
 int res = 0;
 for(int i = 0;i<n;i++)
  for(int j = 1;j<n;j++)
   if(row[i][j] && col[i][j])
     res++;

 return res;
}

int main()
{
  int mat[n][n] = { {1, 0, 1, 1},
                        {0, 1, 1, 1},
		        {1, 1, 1, 1},
			{0, 1, 1, 0}};

  cout<<noofEndlessPoints(mat)<<endl;
 return 0;
}
