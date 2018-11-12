#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
  int top;
 public:    int a[20];
     stack()
   {
     top = -1;
   }
   
   void push(int ele)
         {
           a[++top]=ele;
         }
  
   int pop()
   {
    return(a[top--]);
   }
  int isEmpty()
  {
      return (top==-1);
  }
   int isFull()
   {
     return(top==19);
   }
};

int main()
{
   int i,n,opr,ele;
  stack s ;
    stack();

    cout<<"1)Insert\n2)Pop\n3)exit\n";
do{
    cout<<"enter your operation"<<endl;
   cin>>opr;
    if(opr==1)
    {
      if(!s.isFull())
      {
       cout<<"enter ele to insert"<<endl;
       cin>>ele;
      s.push(ele);
      }
      else 
         cout<<"Stack is Overflowwwwwww!!!"<<endl;
     } 
   
    else if(opr==2)
       if (!s.isEmpty())
      cout<<"popped ele is"<<s.pop()<<endl;
       else 
          cout<<"Stack is Underflowwwwwwwww!!!"<<endl;
    else if(opr==3)
       exit(0);
 } while(opr!=3);
 return 0;
}
