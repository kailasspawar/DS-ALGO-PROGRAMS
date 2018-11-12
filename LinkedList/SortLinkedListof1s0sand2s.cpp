#include<iostream>
#include<stdlib.h>
#include"list.h"
using namespace std;

void sortList(lnode list)
{
  int count[3] = {0,0,0};
  lnode ptr = list;
  while(ptr)
  {
   count[ptr->data]++;
   ptr = ptr->next;
  }

  int i = 0;
  ptr = list;
  while(ptr)
  {
   if(count[i]==0)
    i++;
   else
   {
    ptr->data = i;
    --count[i];
    ptr=ptr->next;
   }
  }
}

int main()
{
 lnode list = NULL;
  list = insert(list,0);
  list = insert(list,1);
  list = insert(list,0);
  list = insert(list,2);
  list = insert(list,1);
  list = insert(list,1);
  list = insert(list,2);
  list = insert(list,1);
list = insert(list,2);
display(list);
  sortList(list);
 cout<<endl;
  display(list);

  return 0;
}
