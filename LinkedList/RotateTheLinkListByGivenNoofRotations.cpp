#include<iostream>
#include"list.h"
using namespace std;

lnode rotate(lnode list,int k)
{
  int i = 0;
  lnode t1,t2;
  t1 = list;
 while(t1&&i < k-1)
 {
  t1 = t1->next;
  i++;
 }
 if(t1==NULL)
 {
  cout<<"k is large than size of list"<<endl;
  return NULL;
 }
 t2 = t1->next;
 while(t2->next!=NULL)
  t2 = t2->next;
 
 t2->next = list;
 list = t1->next;
 t1->next = NULL;

 return list;
}

int main()
{
 lnode list = NULL;
 list = insert(list,10);
 list = insert(list,20);
 list = insert(list,30);
 list = insert(list,40);
 list = insert(list,50);
 list = insert(list,60);

 list = rotate(list,4);
 display(list);

 return 0;
}
