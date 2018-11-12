#include<iostream>
#include<stdlib.h>
using namespace std;

void printAllSeq(int diff,char *out,int start,int end)
{
  if(abs(diff) > (end -start+1)/2)
    return ;

  if(start > end)
  {
    if(diff == 0)
     cout<<out<<" ";
    return;
  }
    out[start] = '0',out[end] = '1';
    printAllSeq(diff+1,out,start+1,end-1); 

    out[start] = out[end] = '1';
    printAllSeq(diff,out,start+1,end-1);

    out[start] = out[end] = '0';
    printAllSeq(diff,out,start+1,end-1);

    out[start] = '1' , out[end] = '0';
    printAllSeq(diff-1,out,start+1,end-1);
}

int main()
{
  int n = 2;

  char out[2*n+1];
     out[2*n] = '\0';
   printAllSeq(0,out,0,2*n-1);
 cout<<endl;
  return 0;
}
