#include<iostream>
#include"list.h"
using namespace std;

void reverse(lnode &list)
{ 
 lnode curr = list,prev = NULL;
 while(curr)
 { 
   lnode next = curr->next;
   curr->next = prev;
   prev = curr;
   curr = next;
 }
 list = prev;
}
bool isPalindrome(lnode list)
{
  lnode slow = list,fast = list;
  lnode midone,prev_slow ;
  while(fast && fast->next)
  {
    prev_slow = slow;
    slow = slow->next;
    fast = fast->next->next;
  }

  if(fast)
  {
    midone = slow;
    slow = slow->next;
  }
 lnode second_half = slow;
 prev_slow->next = NULL;
 lnode fs = list;
 reverse(second_half);
 while(fs && second_half)
 {
  if(fs->data != second_half->data)
   return false;
  fs = fs->next;
     second_half = second_half->next;
 }
// cout<<prev_slow->data<<endl;
// return true;
  return  (!fs && !second_half);
}

int main()
{
  lnode list = NULL;
  list = insert(list,1);
     insert(list,2);
     insert(list,3);
     insert(list,2);
     insert(list,2);
  isPalindrome(list) ? cout<<"Yes\n" : cout<<"No\n";
 return 0;
}





