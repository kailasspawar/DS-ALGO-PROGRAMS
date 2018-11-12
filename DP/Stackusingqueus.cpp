#include<iostream>
#include<queue>
using namespace std;
class Stack
{
  queue<int>q1,q2;
  int curr_size = 0;

  public :
          void push(int ele)
	  {
	    q1.push(ele);
	    curr_size++;
	  }
	  int pop()
	  {
	   if(q1.empty())
	    return -1;

	   while(q1.size() != 1)
	   {
	     q2.push(q1.front());
	     q1.pop();
	   }

	   int ele = q1.front();
	   q1.pop();
	   curr_size--;
	   queue<int>q = q1;
	   q1 = q2;
	   q2 = q;
	  return ele;
	 }
     int size()
     {
       return curr_size;
     }
};

int main()
{
   Stack S;
     S.push(10);
       S.push(20);
         S.push(30);
	  S.push(40);
 cout<<S.pop()<<endl;
 cout<<S.pop()<<endl;
 cout<<S.pop()<<endl;
 cout<<S.pop()<<endl;
 cout<<S.pop()<<endl;
 return 0;
}


