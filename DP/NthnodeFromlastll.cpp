#include<iostream>
#include"list.h"
using namespace std;

int nthNodeLast(lnode list,int n)
{
 if(!list )
   return -1;

  lnode main_ptr = list;
     lnode ref_ptr =list;
     int count = 0;
  while(count < n)
  {
    if(!ref_ptr)
     return -1;
    count++;
    ref_ptr = ref_ptr->next;
  }

  while(ref_ptr)
  {
    main_ptr = main_ptr->next;
    ref_ptr = ref_ptr->next;
  }
 return main_ptr ? main_ptr->data : -1;
}

int main()
{
 lnode list = NULL;
  list =   insert(list,1);
     insert(list,2);
     insert(list,3);
     insert(list,4);
     insert(list,5);
     insert(list,7);
  cout<<nthNodeLast(list,6)<<endl;
 return 0;
}

