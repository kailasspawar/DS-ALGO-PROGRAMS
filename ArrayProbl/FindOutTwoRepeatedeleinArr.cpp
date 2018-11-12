#include<iostream>
using namespace std;
void findRep(int arr[],int n)
{
    int count[6] = {0}; 
   for(int i = 0;i<n;i++)
   {
     if(count[arr[i]]==1)
      cout<<arr[i]<<" " ;
     
      count[arr[i]]++;
   }
   for(int i = 0;i<6;i++)
    cout<<"\n"<<count[arr[i]]<<" ";
}
int main()
 {
   int arr[] = {1,2,3,2,1,4};
           
         findRep(arr,6);
	//code
	return 0;
}
