#include<iostream>
#include<stack>
using namespace std;
//following is the brute force solution
void stockSpan(int arr[],int n,int s[])
{
  s[0] = 1;

  for(int i = 1;i<n;i++)
  {
    s[i] = 1;
    for(int j = i-1;j>=0&&arr[i]>=arr[j];j--)
      s[i]++;
  }
}
//optimize solution in O(n)
void stockSpanOpt(int arr[],int n,int s[])
{
  stack<int>st;
  st.push(0);
  s[0] = 1;
  for(int i = 1;i<n;i++)
  {
    while(!st.empty()&&arr[st.top()] <= arr[i])
     st.pop();

    s[i] = st.empty() ? i+1 : i-st.top();

    st.push(i);
  }
}
void printSpan(int arr[],int n)
{
 for(int i = 0;i<n;i++)
  cout<<arr[i]<<" ";
 cout<<endl;
}
int main()
{
 int arr[] = {10,4,5,90,120,80};
    int n = sizeof(arr)/sizeof(arr[0]);
  int s[n] ;
 cout<<"Span values are\n";
 stockSpan(arr,n,s);
 printSpan(s,n);
 stockSpanOpt(arr,n,s);
 printSpan(s,n);
return 0;
}
