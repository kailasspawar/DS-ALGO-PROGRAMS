#include<iostream>
using namespace std;

struct node
{
 int data;
 node *next;
 node *prev;
};

node *newNode(int data)
{
  node *newnode = new node;
  newnode->data = data;
  newnode->next = newnode->prev = NULL;
  return newnode;
}

node *insert(node *list,int data)
{ 
  if(!list)
    return newNode(data);
  else
  {
    node *temp = list;
    node *newnode = newNode(data);
    while(temp->next)
     temp = temp->next;

    temp->next = newnode;
    newnode->prev = temp;
   }
  return list;
}
void display(node *list)
{
 node *temp = list;
 while(temp)
 {
  cout<<temp->data<<" ";
  temp = temp->next;
 }
cout<<endl;
}
node *reverse(node *list)
{
 if(!list) return NULL;
 node *temp = list;
 node *next = temp->next;
 while(temp&&next->next)
 {
   swap(temp->next,next->prev); 
   temp = temp->next ;
   next = next->next;
 }
 list = next->prev;
 return list;
}
   
int main()
{
  node *list = NULL;
  list = insert(list,10);
    insert(list,20);
     insert(list,30);
     insert(list,40);
   display(list);
  list = reverse(list);
 display(list);
  return 0;
}
