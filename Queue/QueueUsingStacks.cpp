#include<iostream>
using namespace std;

struct sNode
{
   int data;
   sNode *next;
};
typedef struct sNode *stack;
struct queue
{
  stack  stack1;
  stack stack2;
};

typedef struct queue *Queue;

void push(stack &stk,int ele)
{
  stack newnode = new sNode();

  newnode->data = ele;
  newnode->next = NULL;
  if(stk == NULL)
   stk = newnode;
  else
   {
     newnode->next = stk;
     stk = newnode;
   }
}

int pop(stack &stk)
{
  stack temp;
  if(stk==NULL)
  {
   cout<<"stack is Empty\n";
   exit(0);
  }
  temp = stk;
  int ele = temp->data;
  stk = temp->next;
  free(temp);
 return ele;
}
void enQueue(Queue &q,int ele)
{
  push(q->stack1,ele);
//  cout<<pop(q->stack1)<<endl;
}

int deQueue(Queue &q)
{
  int x;
  if(!q->stack1 && !q->stack2)
  {
    cout<<"queue is Empty\n";
    exit(0);
  }
  if(!q->stack2)
  {
    while(q->stack1)
    {
       x = pop(q->stack1);
      push(q->stack2,x);
    }
  }
  x = pop(q->stack2);
  return x;
}


int main()
{
 Queue Q = (struct queue *)malloc(sizeof(struct queue));
 Q->stack1 = NULL;
 Q->stack2 = NULL;

 enQueue(Q,10);
   enQueue(Q,20);
 cout<<deQueue(Q)<<endl;
 enQueue(Q,30);
 cout<<deQueue(Q)<<endl;
 cout<<deQueue(Q)<<endl;
return 0;
}
