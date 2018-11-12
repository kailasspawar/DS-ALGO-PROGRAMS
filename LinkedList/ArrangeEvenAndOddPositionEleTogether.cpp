#include<iostream>
#include"list.h"
#include<vector>
using namespace std;

void rearrange(lnode &list)
{ 
  if(!list)
    return ;
  lnode temp = list;
  vector<int>v;
  lnode temp_prev;
  while(temp)
  {
    lnode temp1 = temp->next;
       v.push_back(temp1->data);
     temp->next = temp1->next;
     free(temp1);
     temp_prev = temp;
     temp = temp->next;
  }
  lnode tt = NULL;
  int i = 0;
 while(i < v.size()-1)
 {
   tt = insert(tt,v[i]);
  i++;
 }
 temp_prev->next = tt;
}

int main()
{
  lnode list = NULL;
     list = insert(list,10);
          insert(list,22);
          insert(list,30);
          insert(list,43);
          insert(list,56);
          insert(list,70);
    rearrange(list);
   display(list);
  return 0;
}
