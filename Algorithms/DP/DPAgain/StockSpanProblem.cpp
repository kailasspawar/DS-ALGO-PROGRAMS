#include<iostream>
#include<stack>
using namespace std;

void stockSpan(int price[],int n)
{
  int S[n];

  stack<int>st;
  st.push(0);
 S[0] = 1;
 for(int i = 1;i<n;i++)
 {
   while(!st.empty() && price[st.top()] <= price[i])
    st.pop();

   S[i] = st.empty() ? i+1 : i-st.top();

   st.push(i);
 }

 for(int i : S)
  cout<<i<<" ";
 cout<<endl;
}

int main()
{
  int arr[] = {10,4,5,90,120,80};
    int n  = sizeof(arr)/sizeof(arr[0]);
  
  stockSpan(arr,n);
 return 0;
}
