#include<iostream>
#define m 3
#define n 4
using namespace std;

bool isPalind(string str)
{
  int len = str.length();
  for(int i = 0;i<len/2;i++)
  {
    if(str[i]!=str[len-i-1])
      return false;
  }
 return true;
}

void printPalinPath(string str,char arr[m][n],int i,int j,int r,int c)
{
  if( i < r-1 || j < c-1)
  {
    if( i < r-1)
     printPalinPath(str+arr[i][j],arr,i+1,j,r,c);
   if(j < c-1)
     printPalinPath(str+arr[i][j],arr,i,j+1,r,c);
 }
 else
 {
   str = str+arr[r-1][c-1];
   if(isPalind(str))
    cout<<str<<endl;
 }
}

 int main()
 {
   char arr[m][n] = {{'a','a','a','b'},
                 {'b','a','a','a'},
		 {'a','b','b','a'}} ; 
     string str = "";
    int r = m,c = n;
	printPalinPath(str,arr,0,0,r,c); 
  return 0;
}

