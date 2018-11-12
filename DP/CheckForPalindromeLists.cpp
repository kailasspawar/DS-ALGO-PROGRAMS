#include<iostream>
#include"list.h"
using namespace std;

void reverse(lnode &list)
{
  lnode curr = list,prev =NULL;
  while(curr)
  {
   lnode next = curr->next;
   curr->next = prev;
   prev = curr;
   curr = next;
  }
 list = prev;
}
bool compareLists(lnode l1,lnode l2)
{
 lnode p = l2;
  while(l1&& l2)
  {
    if(l1->data != l2->data)
     return false;
    l1 = l1->next;
     l2 = l2->next;
  }
 return true;
}
bool palindrome(lnode list)
{
  lnode slow = list;
    lnode fast = list;
   lnode midnode  = NULL;
  while(fast && fast->next)
  {
   slow = slow->next;
   fast = fast->next->next;
  }
 if(fast)
  slow = slow->next;
 reverse(slow);
 lnode pnode = slow;
   
  bool res = compareLists(list,pnode);
 
 return res;
}
   
int main()
{
  lnode list = NULL;
  list = insert(list,1);
    insert(list,2);
//   insert(list,1);
      insert(list,2);
   insert(list,1);
 palindrome(list) ? cout<<"list is palindrome\n" : 
                    cout<<"List is NOT paindrome\n";
return 0;
}
	

