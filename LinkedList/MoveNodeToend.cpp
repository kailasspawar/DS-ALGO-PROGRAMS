#include<iostream>
#include"list.h"
using namespace std;

void moveToEnd(lnode list,int key)
{
  lnode prev = list;
    lnode curr = list;
  while(curr)
  {
    if(prev!=curr && curr->data != key)
    {
      prev->data = curr->data;
      curr->data = key;
      prev = prev->next;
    }
    if(prev->data!=key)
      prev = prev->next;

   curr = curr->next;
  }
}

int main()
{
  lnode list = NULL;
    list = insert(list,1);
           insert(list,2);
           insert(list,2);
           insert(list,4);
	   insert(list,3);
  moveToEnd(list,2);
 display(list);
return 0;
}
