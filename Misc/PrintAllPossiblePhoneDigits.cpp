#include<iostream>
#include<string.h>
using namespace std;

const char hashTable[10][5] = {"","","abc","def","ghi",
                        "jkl","mno","pqrs","tuv","wxyz"};

void printDigits(int num[],int curr_dig,char output[],int n)
{
  if(curr_dig == n)
  {
    cout<<output<<endl;
    return ;
  }

 for(int i = 0;i<strlen(hashTable[num[curr_dig]]);i++)
 {
    output[curr_dig] = hashTable[num[curr_dig]][i];
    printDigits(num,curr_dig+1,output,n);
    if(num[curr_dig] == 0 || num[curr_dig] == 1)
      return ;
 }
}

void print(int str[],int n)
{
  char output[n+1];
  output[n] = '\0';
  printDigits(str,0,output,n);
}

int main()
{
   int str[] = {2,3,4};
  print(str,3);
 return 0;
}
