#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
void checkCircle(char *str[],int n)
{
 vector<char>V;
 
   V.push_back(str[0][0]);
 //     V.push_back(str[0][strlen(str[0])-1]);
  for(int i = 0;i<n;i++)
  {
   if(V.size() < n+1)
   {
    V.push_back(str[i][strlen(str[i])-1]);
      int j = i+1;
   while(j < n)
   {
    if(V[V.size()-1]==str[j][0])
    {
      cout<<"wew"<<endl;
      V.push_back(str[j][strlen(str[j])-1]);
         break;
    }
    j++;
   }
  }
  else 
    break;
}
 if(V.size()== n+1&&V[0]==V[V.size()-1])
  cout<<"Yes\n";
 else
   cout<<"No\n";
 for(int i = 0;i<V.size();i++)
  cout<<V[i]<<" ";
 cout<<endl;
}

int main()
{ 
  char *ss[] = {"aaa", "bbb", "baa", "aab"};//  char *ss[] = {"abc", "efg", "cde", "ghi", "ija"};
  char *str[] = {"ab","bc","cd","da"}; 
                       //for", "geek", "rig", "kaf"};
   int n = sizeof(str)/sizeof(str[0]);
//  sort(str,str+n);  
char *sp[10];  
  int n1 = sizeof(ss)/sizeof(ss[0]);
  checkCircle(ss,n1);
  //   checkCircle(str,n);
 
 return 0;
}
