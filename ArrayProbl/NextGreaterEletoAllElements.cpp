#include<iostream>
using namespace std;
struct stack
{
  int top;
     int stk[100];
};
typedef struct stack Stk;
void initstack(Stk *s)
{
  s->top=-1;
}
bool isEmpty(Stk *s)
{
  return (s->top==-1);
}
bool isFull(Stk *s)
{
  return (s->top==99);
}
void push(Stk *s ,int ele)
{
  if(!isFull(s))
   s->stk[s->top++] = ele;
  else
    cout<<"Stack is Full\n";
}
int pop(Stk *s)
{
  if(!isEmpty(s))
   return (s->stk[s->top--]);
  else
   cout<<"Stack is Epmty\n";
}
void nextGreater(int arr[],int n)
{ 
  Stk s;
   initstack(&s);
   push(&s,arr[0]);
   int ele,next;
 for(int i = 1 ;i < n ; i++)
 {
   next = arr[i];
   if(!isEmpty(&s))
   {
    ele = pop(&s);

    while(ele < next)
    {
     cout<<ele<<"--"<<next<<endl;
      if(isEmpty(&s))
       break;
      ele = pop(&s);
    }
   if(ele > next)
    push(&s,ele);
 }
 push(&s,next);
 }

 while(!isEmpty(&s))
 {
  ele = pop(&s);
  next = -1;
     cout<<ele<<"--"<<next<<endl;
 }
}

int main()
{
  int arr[] = {4, 5, 2, 25};
   nextGreater(arr,4);
  return 0;
}  
