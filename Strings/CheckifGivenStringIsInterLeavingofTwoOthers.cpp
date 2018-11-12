/*
Check whether a given string is an interleaving of two other given strings
Given three strings A, B and C. Write a function that checks whether C is an interleaving of A and B. 
C is said to be interleaving A and B, if it contains all characters of A and B and order of all characters in individual strings is preserved. See previous post for examples.

Solution:
Pick each character of C one by one and match it with the first character in A. If it doesn’t match then match it with first character of B. If it doesn’t even match first character of B, then return false. If the character matches with first character of A, then repeat the above process from second character of C, second character of A and first character of B. If first character of C matches with the first character of B (and doesn’t match the first character of A), then repeat the above process from the second character of C, first character of A and second character of B. If all characters of C match either with a character of A or a character of B and length of C is sum of lengths of A and B, then C is an interleaving A and B.
*/
#include<iostream>
using namespace std;

bool isInterLeave(char *A,char *B,char *C)
{
  while(*C!=0)
  {
    if(*A==*C)
     A++;
    else if(*B==*C)
     B++;
    else
      return false;

    C++;
  }
 if(*A || *B)
 {
   cout<<*A<<" "<<*B<<endl;
   return false;
 }

  return true;
}

int main()
{
  char *s1 = (char *)"AB";
    char *s2 =(char *) "CD";
   char *s3 = (char *)"ADBC";
 if(isInterLeave(s1,s2,s3))
  cout<<"A is Interleaving of B\n";
 else
  cout<<"A is not Interleaving of B\n";
 
 return 0;
}
