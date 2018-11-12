#include<iostream>
#include"list.h"
using namespace std;
lnode deletelist(lnode list,int key)
{
  lnode temp = list;
  while(temp->next&&temp->next->data!=key)
   temp=temp->next;
  if(temp->next==NULL)
  {
   cout<<"Ele not in the list\n";
    return NULL;
  }
   lnode temp1 = temp->next;
   temp->next = temp1->next;
   delete [] temp1;
 return list;
}

int main()
{
 lnode list = NULL;
 list = insert(list,32);
 list = insert(list,12);
 list = insert(list,21);
 list = insert(list,34);
 list = insert(list,31);

 list = deletelist(list,22);
 display(list);
 return 0;
}
