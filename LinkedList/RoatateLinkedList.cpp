#include<iostream>
#include"list.h"
using namespace std;

void rotate(lnode &list,int k)
{
 lnode temp,prev,curr;
  curr = list;
  while(curr)
  {
     int count = 0;
    temp = curr;
    lnode t1 = curr;
    while(temp->next&&count < k-1)
    {
     prev = temp;
     temp = temp->next;
     count++;
    }
    if(count < k-1)
      return;
    if(curr==list)
     list = temp;

    curr = temp->next;
     temp->next = t1;
    prev->next = curr;

 //   list = temp;
//    break;
  }
}
int main()
{
 lnode list = NULL;
  list = insert(list,1);
  list = insert(list,2);
  list = insert(list,3);
  list = insert(list,4);
  list = insert(list,5);
  list = insert(list,6);
  list = insert(list,7);
  list = insert(list,8);
  list = insert(list,9);
  list = insert(list,10);
  int k = 4;
  rotate(list,k);

  display(list);

 return 0;
}
