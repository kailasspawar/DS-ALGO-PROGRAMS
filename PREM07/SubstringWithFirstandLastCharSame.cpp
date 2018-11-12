#include<iostream>
using namespace std;

int main()
{
  string str = "abcab";

  int count = 0;
 int n = str.size();
 for(int i=0;i<n;i++)
   for(int j = i;j<n;j++)
     if(str[i]==str[j]) 
       count++;

 cout<<str<<" "<<count<<endl;
}
