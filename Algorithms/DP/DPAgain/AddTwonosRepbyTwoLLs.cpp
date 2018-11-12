#include<iostream>
#include"ll.h"
using namespace std;

lnode reverse(lnode list)
{
  lnode curr = list;
     lnode prev = NULL;
  while(curr)
  { 
    lnode next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
 return prev;
}
void addTwonos(lnode l1,lnode l2,lnode &l3)
{
  
  l2 = reverse(l2);
  l1 = reverse(l1);
  int carry = 0,sum = 0;
  while(l1 && l2)
  {
    sum = l1->data + l2->data + carry;
    sum > 9 ? carry = 1 : carry = 0;
    sum = sum%10;
    l3 = insert(l3,sum);

    l1 = l1->next;
       l2 = l2->next;
  }
  sum = 0;
  while(l1)
  {
    sum = l1->data + carry;
    sum > 9 ? carry = 1 : carry = 0;
    sum%=10;
    l3 = insert(l3,sum);
    l1 = l1->next;
  }
  while(l2)
  {
    sum = l2->data + carry;
    sum > 9 ? carry = 1 : carry = 0;
    sum%=10;
    l3 = insert(l3,sum);
    l2 = l2->next;
  }
  if(carry)
    l3 = insert(l3,carry);
l3 =  reverse(l3);
}

int main()
{
  lnode l1 = NULL;
      lnode l2 = NULL;
    l1 = insert(l1,5);
        insert(l1,6); 
	   insert(l1,3);
	insert(l1,6);
  insert(l1,1);
  l2 = insert(l2,8);
      l2 = insert(l2,4);
     insert(l2,2);
 lnode l3 = NULL;
  addTwonos(l1,l2,l3);
 display(l3);
 return 0;
}
