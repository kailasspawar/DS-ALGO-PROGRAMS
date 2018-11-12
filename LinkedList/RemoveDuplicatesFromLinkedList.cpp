#include<iostream>
#include"list.h"
#include<unordered_set>
using namespace std;

void removeDuplicates(lnode list)
{
  if(!list)
    return ;
 unordered_set<int>us;
  lnode temp = list;
  lnode prev = NULL;
  while(temp)
  {
    if(us.find(temp->data) != us.end())
    {
      prev->next = temp->next;
       free(temp);
    }
    else
    {
     us.insert(temp->data);
       prev = temp;
    }
   temp = prev->next;
  }
}

int main()
{
  lnode list = NULL;
   list = insert(list,12);
        insert(list,11);
        insert(list,12);
        insert(list,21);
        insert(list,41);
        insert(list,43);
        insert(list,21);
   removeDuplicates(list);

  display(list);
 return 0;
}













