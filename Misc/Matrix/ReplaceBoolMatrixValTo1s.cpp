#include<iostream>
#define m 3 
#define n 4
#include<stdio.h>
using namespace std;

void interchange(int mat[m][n])
{
	int i,j;
	bool rflag = false,cflag = false;
	for(i = 0;i<m;i++)
	{
		for(j = 0;j<n;j++)
		{
			if(mat[i][j]==1 && i==0)
				rflag = true;
			if(mat[i][j] == 1 && j==0)
				cflag = true;
			if(mat[i][j]==1)
			{
				mat[0][j] = 1;
				mat[i][0] = 1;
			}
		}
	}

	for(i = 1;i<m;i++)
	{
		for(j = 1;j<n;j++)
		{
			if(mat[0][j]==1 || mat[i][0]==1)
				mat[i][j] = 1;
		}
	}

	if(rflag == true)
	{
		for(j = 0;j<n;j++)
			mat[0][j] = 1;
	}
	if(cflag == true)
	{
		for(j = 0;j<m;j++)
			mat[j][0] = 1;
	}
}
void printMatrix(int mat[m][n])
{
 for(int i = 0;i<m;i++)
 {
  for(int j = 0;j<n;j++)
   cout<<mat[i][j]<<" ";
  cout<<"\n";
 }
}

int main()
{
	int mat[m][n] = { {1, 0, 0, 1},
		{0, 0, 1, 0},
		{0, 0, 0, 0},
	};

	printf("Input Matrix \n");
	printMatrix(mat);

	interchange(mat);

	printf("Matrix after modification\n");
	printMatrix(mat);

	return 0;
}
