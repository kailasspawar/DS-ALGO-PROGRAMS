#include<iostream>
#include"list.h"
#define null NULL
//By using floyd's cycle finding algorithm

int detectLoop(lnode list)
{
  lnode slowp = list,fastp = list;
 while(slowp&&fastp&&fastp->next)
 {
  slowp = slowp->next;
   fastp = fastp->next->next;
  if(slowp==fastp) 
    return 1;
}
return 0;
}

int main()
{
  lnode list = null;
  list = insert(list,10);
  list = insert(list,12);
  list = insert(list,14);
  list = insert(list,16);

  list->next->next->next->next = list;
  
  detectLoop(list) ? cout<<"Loop is present\n" : cout<<"Loop is NOT present\n";
  return 0;
}
