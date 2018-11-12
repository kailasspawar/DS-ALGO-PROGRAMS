#include<iostream>
using namespace std;
bool search(int arr[],int ele,int len) ;
//int insert(int arr[],int int ele,int len,int pos);
int deleteEle(int arr[],int ele,int len);

bool search(int arr[],int ele,int len)
{
  for(int i = 0;i < len; i++)
  {
   if(arr[i]==ele)
    return true;
  }
 return false;
}
int findpos(int arr[],int ele,int len)
{
 for(int i = 0;i<len;i++)
 { 
  if(arr[i]==ele)
   return i;
 }
 return -1;
}
int deleteEle(int arr[],int ele,int len)
{
   int index = findpos(arr,ele,len);
   if(index!=-1)
   {
     for(int i = pos;i<len;i++)
       arr[i] = arr[i+1];

    return n-1;
   }

  else 
   return n;
}
     
