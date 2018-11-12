#include<iostream>
#include"list.h"
using namespace std;

lnode intersectLists(lnode a,lnode b)
{
   if(a==NULL || b==NULL)
    return NULL;
   if(a->data < b->data)
    return intersectLists(a->next,b);
   if(a->data > b->data)
    return intersectLists(a,b->next);

   lnode temp = new node();
   temp->data = a->data;

   temp->next = intersectLists(a->next,b->next);
 return temp;
}

int main()
{
 lnode a = NULL;
 a = insert(a,1);
     insert(a,2);
     insert(a,3);
     insert(a,4);
     insert(a,6);

 lnode b = NULL;
 b = insert(b,2);
     insert(b,4);
     insert(b,6);
     insert(b,8);
 lnode temp = NULL;
 temp = intersectLists(a,b);
 display(temp);
 return 0;
}

