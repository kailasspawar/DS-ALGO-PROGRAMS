#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  
  vector<int>v,v1;
 int arr[] = {1,2,3,4};
  v.assign(5,4);
  v.push_back(17);
  v.push_back(19);
 for(int&x : v)
   cout<<x<<" ";
 cout<<endl;

 int arr1[] = {1,2,3,4,5};
 for(int &y:arr1)
  cout<<y<<" ";
 cout<<endl;
/*
  v1.assign(5,7);
 for(auto it :v1)
  cout<<it<<" ";
 cout<<endl;
*/
// transform(v.begin(),v.end(),v.begin(),[] (int i) { return i>10 ;});
  vector<int>::iterator it,it1;
  it1 =  remove_if(v.begin(),v.end(), [] (int i) { return i%2==0 ;});
 v.erase(it1,v.end());
 for(it = v.begin();it!=v.end();it++)
  cout<<*it<<" ";
 cout<<endl;

 return 0;
}
