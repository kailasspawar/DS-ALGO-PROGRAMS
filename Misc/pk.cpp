#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

bool ispal(string str,int start,int end)
{
    int count[10]={0};
    for(int i = start;i<=end;i++)
     count[str[i]-'0']++;

    int cnt = 0;
    for(int i = 0;i<10;i++)
         if(count[str[i]-'0']%2==1)
           cnt++;
    if(cnt==1 || cnt==0)
      return true;
    else 
      return false;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   string str = "12345";
   int n = str.length();
   int i = 0,j = n-1;
   int res = -1;

   while(i < j)
   {
       if(ispal(str,i,j))
       {
           res = (j-i);
             break;
       }
    i++;
       j--;
   }
   if(res!=-1)
    cout<<res<<endl;
   else
     cout<<"0"<<endl;
    return 0;
}

