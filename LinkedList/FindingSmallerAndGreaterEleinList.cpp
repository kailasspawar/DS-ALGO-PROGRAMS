#include<iostream>
#include"list.h"
#include<climits>
using namespace std;

lnode smallGrt(lnode list)
{
 // lnode temp = list;
 
  int max = INT_MIN,min = INT_MAX;

  while(list)
  {
    if(max < list->data)
      max = list->data;

    if(min > list->data)
     min = list->data;
   list = list->next;
 }
  
 cout<<"min "<<min<<endl;
 cout<<"max "<<max<<endl;
}

int main()
{
  lnode list = NULL;
  list  = insert(list,4);
          insert(list,1);
	  insert(list,7);
	  insert(list,2);
	  insert(list,11);
  smallGrt(list);
  display(list);
 return 0;
}
