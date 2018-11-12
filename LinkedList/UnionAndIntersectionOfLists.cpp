#include<iostream>
#include"list.h"
#include<unordered_set>
using namespace std;

void intersection(lnode a,lnode b)
{
 lnode intr=NULL , uni = NULL;
 lnode aa = a , bb = b;
 unordered_set<int>ul;
   while(a)
   {
       ul.insert(a->data);
     a = a->next;
   }
 while(b)
 {
  if(ul.find(b->data)!=ul.end())
   intr = insert(intr,b->data);

  b = b->next;
 }
  cout<<"Intersection Lists\n";
   display(intr);
 ul.erase(ul.begin());
 while(aa)
 {
  cout<<aa->data<<" ";
  aa = aa->next;
 }
  // return intr;
}


int main()
{
  lnode a = NULL,b = NULL;
                      b = insert(b,8);
                      b = insert(b,4);
                      b = insert(b,2);
  a = insert(a,10);   b = insert(b,10);
  a = insert(a,15);
  a = insert(a,4);
  a = insert(a,20);
  cout<<"List 1 is :\n";
  display(a);
  cout<<"List 2 is :\n";
  display(b);

  intersection(a,b);
  return 0;
}

