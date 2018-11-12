#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int checkCircle(string str[],int n)
{
 vector<char>V;
   
   V.push_back(str[0][0]);
  for(int i = 0;i<n;i++)
  {
   if(V.size() < n+1)
   {
    V.push_back(str[i][str[i].length()-1]);
      int j = i+1;
   while(j < n)
   {
    if(V[V.size()-1]==str[j][0])
    { 
      V.push_back(str[j][str[j].length()-1]);
         break;
    }
    j++;
   }
  }
  else 
    break;
}
 if(V.size()== n+1&&V[0]==V[V.size()-1])
  return 1;
 else
  return 0;
// for(int i = 0;i<V.size();i++)
//  cout<<V[i]<<" ";
// cout<<endl;
}

int main()
{ 
  int t,n;
  cin>>t;
  while(t--)
  {
      cin>>n;
     string str[n];
     for(int i = 0;i<n;i++)
      cin>>str[i];
     
   cout<<checkCircle(str,n);
  }

 return 0;
}
    
    
    
    
nclude<iostream>
#include<vector>
#include<cstring>
using namespace std;
int checkCircle(string str[],int n)
{
 vector<char>V;

   V.push_back(str[0][0]);
  for(int i = 0;i<n;i++)
  {
   if(V.size() < n+1)
   {
    V.push_back(str[i][str[i].length()-1]);
      int j = i+1;
   while(j < n)
   {
    if(V[V.size()-1]==str[j][0])
    {
      V.push_back(str[j][str[j].length()-1]);
         break;
    }
    j++;
   }
  }
  else 
    break;
}
 if(V.size()== n+1&&V[0]==V[V.size()-1])
  return 1;
 else
  return 0;
// for(int i = 0;i<V.size();i++)
//  cout<<V[i]<<" ";
// cout<<endl;
}

int main()
{
  int t,n;
 while(t--)
 {
   cin>>n;
  string str[n];
 for(int i=0;i<n;i++)
  cin>>str[i];

   cout<<checkCircle(str,n)<<endl;
} 

return 0;
}                                                                              
