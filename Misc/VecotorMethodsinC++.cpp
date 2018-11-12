#include<bits/stdc++.h>
using namespace std;

int main()
{
   
   vector<int> V;
  for(int i = 10;i>0;i--)
   V.push_back(i);
 
 int n = V.size();
 cout<<"Before sorting Vector is\n";
  for(int i = 0;i<n;i++)
   cout<<V[i]<<" ";
  cout<<endl;
  sort(V.begin(),V.end());
 cout<<"After Sorting vector is\n";
  for(int i = 0;i<n;i++)
   cout<<V[i]<<" ";
  cout<<endl;

cout<<"After reverse Vector is\n"; 
  reverse(V.begin(),V.end());
  for(int i = 0;i<n;i++)
   cout<<V[i]<<" ";
  cout<<endl;
 
cout<<"Maximum ele in vector is :"; 
  cout<<*max_element(V.begin(),V.end())<<endl;   

cout<<"Minimum ele in Vector is :"; 
        cout<<*min_element(V.begin(),V.end())<<endl;   
cout<<"Sum of Vector eles :"; 
cout<<accumulate(V.begin(),V.end(),0)<<endl;   
 int arr[] = {12,43,17,12,86,34,12};
   int n1 = sizeof(arr)/sizeof(arr[0]);
 vector<int>V1(arr,arr+n1);
 
 if(find(V1.begin(),V1.end(),31)!=V1.end())
  cout<<"Ele is Found\n";
 else
  cout<<"Ele is NOT Found\n";
  //      cout<<find(V1.begin(),V1.end(),31); 
 cout<<"Original vector\n";
  for(int i = 0;i<n1;i++)
   cout<<V1[i]<<" ";
  cout<<endl;
 cout<<"After erasing the ele at 2nd pos\n";
 V1.erase(V1.begin()+2); 
  for(int i = 0;i<n1;i++)
   cout<<V1[i]<<" ";
  cout<<endl;
 cout<<"After erasing duplicates\n";
 V1.erase(unique(V1.begin(),V1.end()),V1.end());
  for(int i = 0;i<V1.size();i++)
   cout<<V1[i]<<" ";
  cout<<endl;
  return 0;
}

  
