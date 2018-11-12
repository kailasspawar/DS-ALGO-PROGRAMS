#include<iostream>
#include<string.h>
using namespace std;
const char hashTable[10][5] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void printUtil(int number[],int curr_dig,char output[],int n)
{
  int i;
  if(curr_dig == n)
  {
   cout<<output<<endl;
     return; 
  }

  for(i = 0;i<strlen(hashTable[number[curr_dig]]);i++)
  {
    output[curr_dig] = hashTable[number[curr_dig]][i];
    printUtil(number,curr_dig+1,output,n);
    if(number[curr_dig]==0 || number[curr_dig]==1)
      return;
  }
  
}
 void printWords(int num[],int n)
 {
   char result[n+1];
    result[n]='\0';
   printUtil(num,0,result,n);
 }

int main()
{
  int num[] = {2,3,4};
    printWords(num,3);
 
 return 0;
}
 
