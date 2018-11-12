#include<iostream>
using namespace std;

struct node
{
  int data;
  node *prev,*next;
};

typedef struct node *dlnode;

dlnode newNode(int data)
{
  dlnode newnode = new node();
  newnode->data = data;
  newnode->prev = newnode->next = NULL;
  return newnode;
}
dlnode insert(dlnode list,int data)
{
 dlnode temp;
  dlnode newnode = newNode(data);
 if(list == NULL)
 {
  list = temp = newnode;
 }
 else
 {
   temp->next = newnode;
     newnode->prev = temp;
     temp = newnode;
 }
//  list->next = insert(list->next,data);

  return list;
}
void reverse(dlnode &list)
{
  dlnode temp = NULL;
  dlnode curr = list;
  while(curr)
  {
   temp = curr->prev;
    curr->prev = curr->next;
    curr->next = temp;
   curr = curr->prev;
  }
  if(temp!=NULL)
   list = temp->prev;
}
void display(dlnode list)
{
 while(list)
 {
   cout<<list->data<<" ";
  list = list->next;
}
/*dlnode temp = list;
  while(temp)
  { 
   cout<<temp->data<<" ";
   temp = temp->prev;
  }*/
 cout<<endl;
}

int main()
{
  dlnode list = NULL;
    list = insert(list, 10);
    list = insert(list, 20);
    list = insert(list, 30);
    list = insert(list, 40);

    display(list);
  reverse(list);
  display(list);
   return 0;
 }
