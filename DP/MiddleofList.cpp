#include<iostream>
#include"list.h"
using namespace std;

int middle(lnode list)
{
 lnode slow = list;
   lnode fast = list;
  while(fast && fast->next)
  {
   slow = slow->next;
   fast = fast->next->next;
  }
 return slow ? slow->data : -1;
}

int main()
{
  lnode list = NULL;
  list = insert(list,1);
     insert(list,3);
    insert(list,6);
   insert(list,8);
 insert(list,2);
    cout<<middle(list)<<endl;
 return 0;
}
