#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
 int arr[] = {65,3,2,1,6,8,2};
   int n = sizeof(arr)/sizeof(arr[0]);
// sort(arr,arr+n);
 vector<int> arr1;
    copy(arr,arr+n,back_inserter(arr1));
 vector<int>::iterator it;
 it =  remove_if (arr1.begin(),arr1.end(),[](int i){ return i % 2 != 0;});
 arr1.erase(it,arr1.end());
 for(int &i : arr1)
  cout<<i<<" ";
 cout<<endl;

 string str = "AWRDDFFRT";
 transform(str.begin(),str.end(),str.begin(),[](char i){return tolower(i);});
 cout<<str<<endl;
 return 0;
}
