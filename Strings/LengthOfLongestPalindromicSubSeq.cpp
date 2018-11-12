// str = "GEEKSFORGEEKS" o/p => 5 i;e "EEFEE",EEKEE" AND SO ON
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int lps(string str,int i,int j)
{
   if(i==j)
     return 1;
  if(str[i]==str[j] && i+1 == j)
    return 2;

  if(str[i]==str[j])
    return lps(str,i+1,j-1) + 2;
 
  return max(lps(str,i,j-1),lps(str,i+1,j));
}

int main()
{
  string str = "GEEKSFORGEEKS";
    cout<<lps(str,0,str.length()-1)<<endl;
  return 0;
}
