#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
  int data;
    node *next;
};

typedef struct node *Snode;
Snode top;
Snode push(int ele)
{
  Snode newnode = new node();
  newnode->data = ele;
  newnode->next=NULL;
  if(top==NULL)
   top = newnode;
  else
  {
    newnode->next = top;
    top = newnode;
  }
  return top;
}
bool isEmpty(Snode top)
{
 return (top==NULL);
}
int pop()
{
  if(!isEmpty(top))
  {
   Snode temp = top;
    int ele = top->data;
    top = top->next;
    free(temp);
    return ele;
  }
  else
    cout<<"Stack is UnderFlow\n";
}
void display(Snode top)
{
  if(top==NULL) return;

  cout<<top->data<<" ";
  display(top->next);
}

int main()
{
  Snode top = NULL;
    top = push(20);
    top = push(10);
    top = push(30);
    top = push(40);
    top = push(50);
 display(top);
  cout<<endl;
  cout<<pop()<<endl;
  cout<<pop()<<endl;
  cout<<pop()<<endl;
  cout<<pop()<<endl;
  cout<<pop()<<endl;
  cout<<pop()<<endl;  
 return 0;
}

