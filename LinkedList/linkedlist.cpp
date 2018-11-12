#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
};

typedef struct node *llist;
llist newNode(int ele)
{
 llist newnode = new node();
 newnode->data = ele;
 newnode->next = NULL;
 return newnode;
}

llist insert(llist list ,int ele)
{
  if(list == NULL)
  {
   list = newNode(ele);
    return list;
  }
  else
  {
   list->next = insert(list->next,ele);
  }
return list;
}

int display(llist list)
{
 llist temp = list;
 int sum = 0;
 while(temp!=NULL)
 {
  cout<<temp->data<<" ";
  sum+=temp->data;
   temp = temp->next;
 }
 cout<<endl;
return sum;
}
void disp (llist list)
{
 while(list!=NULL)
{
  cout<<list->data<<" ";
 list = list->next;
}
cout<<endl;
}
llist reverse(llist list)
{
  llist curr = list;
   llist prev = NULL;
  while(curr)
  {
   llist next = curr->next;
   curr->next = prev;
   prev = curr;
   curr=next;
  }
 return prev;
}
int main()
{
  llist list = NULL;
  list = insert(list,10);
  list = insert(list,13);
  list = insert(list,4);
  list = insert(list,7);
  list = insert(list,17);
 cout<<"Sum of List is : "<<display(list)<<endl;
 disp(list);
 list = reverse(list);
 disp(list);
 cout<<list->next->data<<endl;
  return 0;
}
