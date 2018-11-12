#include<iostream>
#include<stdlib.h>
using namespace std;

struct node 
{
  int data;
 struct node *next;
};
typedef struct node *snode;

snode top;

snode push(int ele)
{
  snode newnode = new node();
    newnode->data = ele;
    newnode->next = NULL;
   if(!top)
     top = newnode;
   else
    {
      newnode->next = top;
      top = newnode;
    }
 return top;
}
bool isEmpty(snode top)
{
 return (top==NULL);
}
int pop()
{
  if(!isEmpty(top))
  {
   snode temp = top;
   int ele = top->data;
   top = top->next;
   free (temp);
   return ele;
  }
 else 
   cout<<"Stack is Underflow\n";
 }

 int main()
 {
   snode top = NULL;
      top = push(80);
      top = push(50);
      top = push(30);
      top = push(40);
   cout<<pop()<<endl;
     cout<<pop()<<endl;
     cout<<pop()<<endl;
   return 0;
 }
