#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   string str = "12345354987";
   int n = str.length();
   int count[10]={0};
   int res = -1;
   int s ,e;
   int i ,j;
   for(int i = 0;i<n;i++)
    count[str[i]-'0']++;
   
   for(i = 0;i<n;i++)
     if(count[str[i]-'0'] > 1)
       break;
   for(j = n-1;j>=0;j--)
    if(count[str[j]-'0'] > 1)
      break;
    int cnt = 0;  
    for(int k = i;k<=j;k++)
    {
      if(count[str[k]-'0']%2==1)
        cnt++;
    }
    if(cnt == 1 || cnt == 0 && (j-i) > 0)
      cout<<(j-i)+1<<endl;
    else
      cout<<"0"<<endl;
}

