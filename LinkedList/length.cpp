#include<iostream>
#include<stdlib.h>
#include"list.h"
using namespace std;

int length(lnode list)
{
 int count = 0;
  while(list!=NULL)
  {
   cout<<list->data<<" ";
   count++;
    list = list->next;
  }
 cout<<endl;
 return count;
}
int length1(lnode list)
{
 if(list==NULL)
  return 0;

 return 1+length1(list->next);
}
int sumlist(lnode list)
{
 if(list==NULL)
  return 0;

 return list->data+sumlist(list->next);
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
// display(list);
//cout<<endl;
 cout<<length(list)<<endl;
 cout<<length1(list)<<endl;
 cout<<sumlist(list)<<endl;
return 0;
}
