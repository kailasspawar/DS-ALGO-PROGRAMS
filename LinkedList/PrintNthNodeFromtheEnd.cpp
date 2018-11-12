#include<iostream>
#include"list.h"

lnode printNthNode(lnode list,int n)
{
  lnode ref_ptr = list,main_ptr = list;
  int count = 0;
  while(count < n)
  {
   if(ref_ptr==NULL)
   {
    cout<<n<<" is greater than no of nodes\n";
     return NULL;
   }
   ref_ptr = ref_ptr->next;
   count++;
  }
  
  while(ref_ptr!=NULL)
  {
    main_ptr = main_ptr->next;
    ref_ptr = ref_ptr->next;
  }
  return main_ptr;
}

int main()
{
 lnode list = NULL;
  list = insert(list,10);
  list = insert(list,12);
  list = insert(list,11);
  list = insert(list,32);
  list = insert(list,21);
  list = insert(list,7);
  list = insert(list,8);
  display(list);
 lnode node = printNthNode(list,8);
 if(node!=NULL)
  cout<<node->data<<endl;
 return 0;
}
