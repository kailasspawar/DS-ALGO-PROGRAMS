#include<iostream>
#include"list.h"
using namespace std;

void printR(lnode list)
{
 if(!list)
  return;

 printR(list->next);
cout<<list->data<<" ";
}

int main()
{
 lnode list = NULL;
 list = insert(list,1);
   insert(list,2);
     insert(list,3);
   insert(list,4);
  printR(list);
 return 0;
}
