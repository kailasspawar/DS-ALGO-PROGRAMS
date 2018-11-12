#include<iostream>
#include"list.h"
#include<math.h>
using namespace std;

int sqnthNode(lnode list)
{
 int  count = 0;
  for(lnode temp = list;temp!=NULL;temp= temp->next)
   count++;
  int sq = floor(sqrt(count));
  count = 0;

  while(list&&count < sq-1)
  {
   count++;
   list = list->next;
  }
   
  return list->data;
}

int main()
{
  lnode list = NULL;
  list = insert(list,1);
  list = insert(list,2);
  list = insert(list,3);
  list = insert(list,4);
  list = insert(list,5);

  cout<<sqnthNode(list)<<endl;
 return 0;
}

