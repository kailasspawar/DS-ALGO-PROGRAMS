#include<iostream>
#include"list.h"
using namespace std;

int calcLength(lnode list)
{
 if(list == NULL)
  return 0;

 return 1+calcLength(list->next);
}

int main()
{
 lnode list =  NULL;
   list = insert(list,10);
   list = insert(list,30);
     insert(list,32);
     insert(list,54);
    insert(list,23);
   display(list);
  cout<<"Lenght of List "<<calcLength(list)<<endl;
 return 0;
}
