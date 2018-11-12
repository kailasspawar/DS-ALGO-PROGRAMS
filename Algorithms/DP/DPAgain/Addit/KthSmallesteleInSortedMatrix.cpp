#include<iostream>
#define N 4
#include<queue>
using namespace std;

int kthSmallest(int mat[N][N],int k)
{
  if(k <= 0 || k > N*N)
    return -1;
   priority_queue<int>pq;
   
  for(int i = 0;i<N;i++)
   for(int j = 0;j<N;j++)
    pq.push(mat[i][j]);
  int i = 0,ele;
  int n = pq.size();
  while( !pq.empty() && i < n-k+1)
  {
     ele = pq.top();
       pq.pop();
     i++;
  }
 return ele;
}

int main()
{
  int mat[N][N] = {{10,20,30,40},
                   {15,25,35,45},
		   {24,29,37,48},
	           {32,33,39,50}};
   int k = 16;
  kthSmallest(mat,k) == -1 ? cout<<"K is out of Range\n" : cout<<k<<"th smallest is "<<kthSmallest(mat,k)<<endl;
 return 0;
}
