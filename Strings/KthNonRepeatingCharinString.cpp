#include<iostream>
#include<vector>
using namespace std;

void kthNonRepeating(string str,int k)
{
   int count[256] = {0};
    vector<char> V(10);
  cout<<V.size()<<endl;
   for(int i = 0;i<str.size();i++)
    count[str[i]]++;
   int j = 0;
   for(int i=0;i<256;i++)
    if(count[i]==1)
     V[j++] = char(i);

   cout<<V[k-1]<<endl;
}

int main()
{
  string str = "geeksforgeeks";
 kthNonRepeating(str,3);
 
  return 0;
}
