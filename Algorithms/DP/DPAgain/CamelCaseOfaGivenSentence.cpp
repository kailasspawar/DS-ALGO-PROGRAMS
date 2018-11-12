#include<iostream>
#include<algorithm>
using namespace std;

void convertCamelCase(string str)
{
  for(int i = 1;i<str.length();i++)
  {
     if(str[i] == ' ')
     {
       str[i] = '\0';
       str[i+1] = toupper(str[i+1]);
     }
  }
 cout<<"String after conversion "<<str<<endl;
}

int main()
{
  string str = "Here comes the garden";
  convertCamelCase(str);
 int arr[] = {1,4,9,5,2,7,6,8};
     int n = sizeof(arr)/sizeof(arr[0]);
    make_heap(arr,arr+n);
    sort_heap(arr,arr+n);
 for(int i : arr)
  cout<<i<<" ";
 cout<<endl;
   int sum = accumulate(arr,arr+n,0);
  cout<<sum<<endl;
  
 return 0;
}
