#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Stack
{
  int *arr;
    int top;
};
typedef struct Stack Stack;

void initStack(Stack *ps,int cap)
{
  ps->arr = (int *)malloc(sizeof(int)*cap);
    ps->top = -1;
}
bool isEmpty(Stack *ps)
{
  return (ps->top==-1);
}

void push(Stack *ps,int ele)
{
  ps->arr[++ps->top]=ele;
}
int pop(Stack *ps)
{  
  if(!isEmpty(ps))
   return (ps->arr[ps->top--]);
  else
   return -1;
}
void reverseStack(Stack *ps,Stack *s1)
{ 
   if(isEmpty(ps))
     return ; 
   else
    s1->arr[++s1->top]=pop(ps);
 
   reverseStack(ps,s1);
}
void print(Stack *ps,int ind)
{
  if(!ps->arr[ind])
    return;
  cout<<ps->arr[ind]<<endl;

  print(ps,ind+1);
}

int main()
{
  Stack S,s1;
    initStack(&S,10);
      initStack(&s1,10);
  push(&S,10);
  push(&S,20);
  push(&S,30);
  push(&S,40);
  print(&S,0);
 reverseStack(&S,&s1);
 cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
  print(&s1,0);
 return 0;
}
