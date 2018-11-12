#include<iostream>
using namespace std;
void printstr(char *s)
{
  for(int i = 0;*(s+i);i++)
   cout<<*(s+i);

  cout<<"\n";
}
int main()
{
  char *s = "i love you";
 printstr(s);
 
  return 0;
}
