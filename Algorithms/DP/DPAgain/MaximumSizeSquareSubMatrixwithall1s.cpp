#include<iostream>
#define r 6
#define c 5
using namespace std;

int maxSubMatrix(int mat[r][c])
{
	int sum[r][c];

	for(int i = 0;i<c;i++)
		sum[0][i] = mat[0][i];

	for(int i = 0;i<r;i++)
		sum[i][0] = mat[i][0];

	for(int i = 1;i<r;i++)
	{
		for(int j = 1;j<c;j++)
		{
			if(mat[i][j] == 1)
				sum[i][j] = 1 + min(sum[i-1][j],min(sum[i][j-1],sum[i-1][j-1]));
			else
				sum[i][j] = 0;
		}
	}
      int 	max_of_s = sum[0][0],max_i = -1,max_j = -1;
	for(int i = 0;i<r;i++)
	{
		for(int j = 0;j<c;j++)
		{
			if(max_of_s < sum[i][j])
			{
				max_of_s = sum[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}

	for(int i = max_i;i>max_i-max_of_s;i--)
	{
		for(int j = max_j;j>max_j-max_of_s;j--)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
}

int main()
{
	int mat[r][c] = {{0, 1, 1, 0, 1}, 
		{1, 1, 0, 1, 0}, 
		{0, 1, 1, 1, 0},
		{1, 1, 1, 1, 0},
		{1, 1, 1, 1, 1},
		{0, 0, 0, 0, 0}};
   maxSubMatrix(mat);
  return 0;
}
