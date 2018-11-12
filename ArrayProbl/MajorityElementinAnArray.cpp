//Majority element is an element which occurs more than n/2 times in an array of size n
#include<iostream>
using namespace std;

int majorityEle(int arr[],int n)
{
 int i;
 int maj_ind = 0,count = 1;
 for( i = 1;i<n;i++)
 {
   if(arr[maj_ind] == arr[i])
     count++;
   else
     count--;
    
   if(count==0)
   {
    maj_ind = i;
      count = 1;
   }
 }
  return arr[maj_ind];

}
void printMajorityEle(int arr[],int n)
{
  int count = 0;
  int cand = majorityEle(arr,n);
  for(int i = 0;i<n;i++)
  {
    if(arr[i]==cand)
     count++;
  }
  if(count > n/2)
   cout<<"majority ele "<<cand<<"\n";
  else 
   cout<<"no majority ele"<<"\n";
 }

int main()
{
 int arr[] = { 3 ,3 ,4 ,2 ,4 ,4 ,2 ,0,4};
 printMajorityEle(arr,9);
 return 0;
}
 
