#include<iostream>
#include<stack>
using  namespace std;
class Queue
{
  stack<int>s1;
    stack<int>s2;

  public :
          void enQueue(int x)
	  {
	    s1.push(x);
	  }
	  int deQueue()
	  {
	    int ele;
	    if(s1.empty() && s2.empty())
	    {
	     cout<<"stack is Empty\n";
	       return -1;
	    }
	    else
	    {
	      if(s2.empty())
	      {
	        while(!s1.empty())
		{
		   ele = s1.top();
		  s1.pop();
		  s2.push(ele);
		}
	       ele = s2.top();
	        s2.pop();
	      
	      }
	      else
	      {
	         ele = s2.top();
		 s2.pop();
	     }
	       return ele;
	    }
	   }
};

int main()
{
  Queue q;
  q.enQueue(10);
    q.enQueue(20);
     q.enQueue(30);
      q.enQueue(40);
  cout<<"dequeue ele is "<<q.deQueue()<<endl;
  cout<<"dequeue ele is "<<q.deQueue()<<endl;
  cout<<"dequeue ele is "<<q.deQueue()<<endl;
  cout<<"dequeue ele is "<<q.deQueue()<<endl;
 return 0;
}
      
