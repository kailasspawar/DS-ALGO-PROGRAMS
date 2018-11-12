#include<iostream>
#include"ll.h"
using namespace std;
lnode newNode(int data)
{
  lnode newnode = new node();
    newnode->data = data;
   newnode->next = NULL;
  return newnode;
}
bool detectLoop(lnode list)
{
  if(!list)
    return false;

  lnode slow = list;
     lnode fast = list;

  while(slow && fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;

    if(slow == fast)
      return true;
  }
 return false;
}

int main()
{
  lnode list = newNode(10);
   list->next = newNode(20);
   list->next->next = newNode(30);
  list->next->next->next = newNode(40);
  list->next->next->next->next = newNode(50);
  list->next->next->next->next = list;

 detectLoop(list) ? cout<<"Yes\n" : cout<<"No\n";
return 0;
}

