// C++ program to sort an array according absolute
// difference with x.
#include<bits/stdc++.h>
using namespace std;
 
// Function to sort an array according absolute
// difference with x.
void rearrange(int arr[], int n, int x)
{
    multimap<int, int> m;
     multimap<int,int>::iterator it; 
    // Store values in a map with the difference
    // with X as key
    for (int i = 0 ; i < n; i++)
        m.insert(make_pair(abs(x-arr[i]),arr[i]));
 
    // Update the values of array
    int i = 0;
/*    for (auto it = m.begin(); it != m.end(); it++)
        arr[i++] = (*it).second ;*/

    for ( it = m.begin(); it != m.end(); it++)
      arr[i++] = it->second ;

    for ( it = m.begin(); it != m.end(); it++)
     cout<<it->first<<" " ;
    cout<<endl;
    for ( it = m.begin(); it != m.end(); it++)
     cout<<it->second<<" " ;
    cout<<endl;
    
}
 
// Function to print the array
void printArray(int arr[] , int n)
{
    for (int i = 0 ; i < n; i++)
        cout << arr[i] << " ";
  cout<<endl;
}
 
// Driver code
int main()
{
    int arr[] = {10, 5, 3, 9 ,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 7;
    rearrange(arr, n, x);
    printArray(arr, n);
 list<int>list1;
  list1.emplace_back(10);
  list1.emplace_back(20);
  list1.emplace_back(30);
  list1.emplace_back(40);
 list<int>::iterator it;
 for(it = list1.begin();it!=list1.end();it++)
  cout<<*it<<" ";
cout<<endl;
    return 0;
}
