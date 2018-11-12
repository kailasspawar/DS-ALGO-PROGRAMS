#include<iostream>
#include<algorithm>
using namespace std;

int pow(int n,int k)
{
  if(k==0)
    return 1;
  return n*pow(n,k-1);
}
void bintoDec(int bin[] ,int n)
{
/*  int *start = bin;
    int *end = bin+n;
  
    end = transform(start,end,start,[] (int i){ return i*3;});

   for(int *i = start;i!=end;i++)
    cout<<*i<<" ";

  cout<<endl;
*/
  int res = 0,j = 0;
  for(int i = n-1;i>=0;i--)
  {
   if(bin[i]==1)
     res+=pow(2,j);
    
   j++;
  }

 cout<<"decimal equiv is "<<res<<endl;
}

int main()
{
  int str[] = {1,0,0,0,0};
    int n = sizeof(str)/sizeof(str[0]);
    bintoDec(str,n);
  cout<<pow(2,5)<<endl;
  return 0;
}
