#include<iostream>
#include"list.h"

void deleteNodes(lnode list,int m,int n)
{
 int i;
  lnode temp = list,prev;
 while(temp)
 {
  for(i = 1;i<m&&temp!=NULL;i++)
   temp = temp->next;

  if(temp==NULL)
   return;
  prev = temp->next;
  for(i = 1;i<=n&&prev!=NULL;i++)
  {
     lnode t1 = prev;
     prev = prev->next;
     free(t1);
    }
  temp->next = prev;
 temp = prev;
  }
}

int main()
{
 lnode list = NULL;

 list = insert(list,1);
       insert(list,2);
        insert(list,3);
        insert(list,4);
       insert(list,5);
        insert(list,6);
        insert(list,7);
        insert(list,8);
        insert(list,9);
        insert(list,10);
  int m = 2,n = 2;
  cout<<"Before delete nodes\n";
  display(list);
   deleteNodes(list,m,n);
 cout<<"After deleting" <<n<< "nodes after "<<m <<"nodes"<<endl;
   display(list);
  return 0;
 }
