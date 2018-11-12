#include<iostream>
#include"list.h"

using namespace std;

lnode merge(lnode a,lnode b)
{
  if(!a)
    return b;
  if(!b) 
    return a;

  if(a->data < b->data)
  {
   a->next = merge(a->next,b);
    return a;
  }
  else
  {
   b->next = merge(a,b->next);
    return b;
  }
 }

 int main()
 {
   lnode a = NULL,b=NULL;

   a = insert(a,1);
   a = insert(a,2);
   a = insert(a,5);
    
    b = insert(b,0);
    b = insert(b,3);
    b = insert(b,4);

    a = merge(a,b);

    display(a);
  return 0;
}
     
