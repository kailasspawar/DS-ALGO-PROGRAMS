#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int myCompare(string X,string Y)
{
 string XY = X.append(Y);
 string YX = Y.append(X);
  return XY.compare(YX) > 0 ? 1 : 0;
}
void arrange(vector<string>&s)
{
  sort(s.begin(),s.end(),myCompare);
  for(int i = 0;i<s.size();i++)
   cout<<s[i];
  cout<<endl;
} 

int main()
{
 vector<string>arr;
 arr.push_back("54");
    arr.push_back("546");
    arr.push_back("548");
    arr.push_back("60");
  arrange(arr);
 return 0;
}
