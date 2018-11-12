#include<iostream>
#define r 4
#define c 4
#define m 1
#define n 6
using namespace std;

bool findinMatrix(int mat[r][c],int x)
{
  for(int i = 0;i<r-1;i+=2)
  {
    for(int j = 0;j<c-1;j+=2)
     if(mat[i][j] == x || mat[i][j+1] == x ||
        mat[i+1][j] == x || mat[i+1][j+1] == x)
	return true;
  }
 return false;
}
//this works fine if order of matrix are same o;w not
bool findEleinMat(int mat[m][n],int x)
{
  int i = 0,j = n-1;
  while(i < m && j >=0)
  {
    if(mat[i][j] == x)
     return true;
    if(mat[i][j] > x)
     j--;
    else
     i++;
  }
 return false;
}

int main()
{
  int mat[r][c] = {{10,20,30,40},
  		   {15,25,35,45},
		   {27,29,37,48},
		   {32,33,39,50}};

	 int mt[m][n] = {{1,2,3,4,5,6}};
    
   findinMatrix(mat,100) ? cout<<"Ele present\n" : cout<<"Ele not present\n";
   findEleinMat(mt,4) ? cout<<"Ele present\n" : cout<<"Ele not present\n";
 return 0;
}
