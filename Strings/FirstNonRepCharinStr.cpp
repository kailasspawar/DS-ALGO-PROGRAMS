#include<iostream>
#define M 256
using namespace std;
char firstNonRep(char *str,int n)
{
  int count[M] = {0};
  for(int i = 0;*(str+i);i++)
   count[*(str+i)]++;

  for(int i = 0;*(str+i);i++)
    if(count[*(str+i)]==1)
     return *(str+i);
 return -1;
}
int main()
{
  char *str = (char *)"india";
   int n = sizeof(str)/sizeof(str[0]);
  (firstNonRep(str,n) != -1) ? cout<<firstNonRep(str,n)<<endl : cout<<"All chars rep\n" ;

 return 0;
}
