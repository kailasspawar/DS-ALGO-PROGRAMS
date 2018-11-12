#include<iostream>
#define r 3
#define c 3
using namespace std;

void transpose(char mat[][c],char res[r][c])
{
  int i,j;
  for(i = 0;i<r;i++)
  {
   for(j = 0;j<c;j++)
   {
      res[i][j]=mat[j][i] ; 
   }
 }

  for(i = 0;i<r;i++)
  {
   for(j = 0;j<c;j++)
   {
    cout<<res[i][j]<<" ";
   }
   cout<<endl;
 }

}

int main()
{
 char mat[][c] = {{'a','b','c'}, 
 			{'d','e','f'},
		{'g','h','i'}};
  char res[r][c];
 transpose(mat,res);

 return 0;
}
