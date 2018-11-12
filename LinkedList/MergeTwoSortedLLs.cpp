#include<iostream>
#include"list.h"
using namespace std;

void mergeSorted(lnode a,lnode b)
{
  while(a && b)
  {
    if(a->data > b->data)
    {
       swap(a->data,b->data);

       lnode temp = b;
      if(b->next && b->data > b->next->data)
      {
        b = b->next; 
	    lnode prev = NULL,ptr = b;
	  while(ptr && ptr->data < temp->data)
	  {
	    prev = ptr;
	    ptr = ptr->next;
	  }
	 prev->next = temp;
	 temp->next = ptr;
     }
    }
   a = a->next;
 }
}

int main()
{
  lnode list = NULL;
     list = insert(list,2);
            insert(list,4);
            insert(list,7);
            insert(list,8);
            insert(list,10); 
  lnode list1 = NULL;
     list1 = insert(list1,1);
            insert(list1,3);
	    insert(list1,12);
mergeSorted(list,list1);
 display(list);
   display(list1);
  return 0;
}
