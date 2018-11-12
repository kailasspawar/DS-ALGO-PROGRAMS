#include<iostream>
#include<stdlib.h>
#include<vector>
#define NO_OF_CHAR 256
using namespace std;

void allRepeated(string str,int k)
{
  int *count = (int *)calloc(NO_OF_CHAR,sizeof(int));
  int i;
  vector<char> V ;
  for( i = 0;i<str.size();i++)
  {
    count[str[i]]++;
  }
  
 for(i = 0;i<256;i++)
 {
   if(count[i]==1)
   {
     V.push_back(i);
    //  cout<<char(i)<<","<<count[i]<<endl;

 }
}
 cout<<V[k-1]<<endl;
}

int main()
{
  string str = "geeksforgeeks";
  
   allRepeated(str,3);
 return 0;
}
