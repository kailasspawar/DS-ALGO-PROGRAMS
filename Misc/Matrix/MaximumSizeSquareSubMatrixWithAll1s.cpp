#include<iostream>
#define r 6
#define c 5
using namespace std;
int mini(int a,int b,int k)
{
	int mx = a;
	if(mx > b)
		mx = b;
	if(mx > k)
		mx = k;

	return mx;
}   

void printSubMatrix(bool mat[r][c])
{
	int S[r][c];

	int i,j;
	for(i = 0;i<c;i++)
		S[0][i] = mat[0][i];

	for(i=0;i<r;i++)
		S[i][0] = mat[i][0];

	for(i = 1;i<r;i++)
	{
		for(j = 1;j<c;j++)
		{
			if(mat[i][j] == 1)
				S[i][j] = mini(S[i-1][j],S[i][j-1],S[i-1][j-1]) + 1;
			else
				S[i][j] = 0;
		}
	}
	int  max_of_s = S[0][0],max_i = 0,max_j = 0;

	for(i = 0;i<r;i++)
	{
		for(j = 0;j<c;j++)
		{
			if(max_of_s < S[i][j])
			{
				max_of_s = S[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}

	cout<<"Maximum size Submatrix is\n";
	for(i = max_i;i > max_i - max_of_s;i--)
	{
		for(j = max_j;j > max_j-max_of_s;j--)
		{
			cout<<mat[i][j]<<" ";
	        }
		cout<<"\n";
	}

}

int main()
{
	bool M[r][c] =  {{0, 1, 1, 0, 1}, 
		{1, 1, 0, 1, 0}, 
		{0, 1, 1, 1, 0},
		{1, 1, 1, 1, 0},
		{1, 1, 1, 1, 1},
		{0, 0, 0, 0, 0}};

	printSubMatrix(M); 
   return 0;
}

