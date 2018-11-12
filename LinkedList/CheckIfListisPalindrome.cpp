#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
 char data;
 node *next;
};

typedef struct node *lnode;

lnode insert(lnode list,char ele)
{
  if(list==NULL)
  {
   lnode newnode = new node();
   newnode->data = ele;
   newnode->next = NULL;
   return newnode;
  }
  else
   list->next = insert(list->next,ele);
}
void display(lnode list)
{
 while(list)
 { 
  cout<<list->data<<" ";
  list = list->next;
 }
 cout<<endl;
}
void reverse(lnode *list)
{
 lnode curr = *list,prev = NULL,next;
 while(curr!=NULL)
 {
  next = curr->next;
  curr->next = prev;
  prev = curr;
  curr = next;
 }
 *list = prev; 
}
bool compare(lnode list1,lnode list2)
{
 while(list1&&list2)
 {
  if(list1->data == list2->data)
  {
   list1 = list1->next;
   list2 = list2->next;
  }
  else
   return false;
 }
 if(list1==NULL&&list2==NULL)
  return false;
 else
  return true;
}

bool ispalindrome(lnode list)
{
  bool res = false;
  lnode slow = list,fast = list,slow_prev;
  lnode midone = NULL,secondhalf;
 if(list&&list->next)
 {
  while(slow&&fast&&fast->next)
  {
   fast = fast->next->next;
   slow_prev = slow;
   slow = slow->next;
  }
  if(fast!=NULL)
  {
   midone = slow->next;
   slow = slow->next;
  }
 secondhalf = slow;
 slow_prev->next->next = NULL;
 reverse(&secondhalf);

 res = compare(list,secondhalf);
 cout<<res<<endl;
 reverse(&secondhalf);

 if(midone!=NULL)
 {
  slow_prev->next = midone;
  midone->next  = secondhalf;
 }
 else
  slow_prev->next = secondhalf;
 }
return res;
}

int main()
{
 lnode list = NULL;
 list = insert(list,'R');
 list = insert(list,'A');
 list = insert(list,'D');
 list = insert(list,'A');
 list = insert(list,'R');
// reverse(list);
 display(list);
 if(ispalindrome(list))
  cout<<"List is Palindrome\n";
 else
  cout<<"List is NOT Palindrome\n";
 return 0;
}
