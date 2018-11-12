#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;

static int compare(const void *a,const void *b)
{
  return strcmp(*(const char**)a,*(const char**)b);
}

void sort(const char *arr[],int n)
{
 qsort(arr,n,sizeof(const char *),compare);
}

int main()
{
  const char *arr[] = {"Geeksforgeeks","Geeksquiz","CLanguage"};
 int n = sizeof(arr)/sizeof(arr[0]);

  cout<<"before sorting the string is\n";
  for(int i = 0;i<n;i++)
   cout<<arr[i]<<" ";
 cout<<"\n";
  
  sort(arr,n);
  cout<<"AFTER sorting the string is\n";
  for(int i = 0;i<n;i++)
   cout<<arr[i]<<" ";
 cout<<"\n";
return 0;
}
