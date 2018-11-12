#include<iostream>
using namespace std;

class Stack
{
  int *arr;
   int top1;
   int top2;
   int size;
  public:
        void init(int n)
	{ 
	  size = n;
	  arr =(int *)malloc(sizeof(int)*size);
	  top1 = -1;
	  top2 = size;
	}
	void push1(int x)
	{
	 if(top1 == top2-1)
	 {
	  cout<<"Stack is full\n";
	   return;
	 }
	 arr[++top1] = x;
	}
	void push2(int x)
	{
	 if(top1 == top2-1)
	 {
	  cout<<"Stack is full\n";
	  return ;
	 }
	 arr[--top2] = x;
       }
       int pop1()
       {
        if(top1 == -1)
  	{
         cout<<"Stack is Empty\n";
	 return -1;
	}
        return arr[top1--];
      }
      int pop2()
      {
        if(top2 == size)
	{
	 cout<<"Stack is Empty\n";
	 return -1;
	}
       return arr[top2++];
     }
 };
  
 int main()
 {
  Stack s1;
     s1.init(10);
    s1.push1(10);
       s1.push1(20);
    cout<<s1.pop1()<<endl;
   return 0;
 }





