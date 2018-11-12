#include<iostream>
#include"list.h"
#include<unordered_set>
using namespace std;
void removeDupli(lnode list)
{
  unordered_set<lnode>h;
 lnode  temp = list;
    h.insert(temp);
 while(temp)
 {
   if(h.find(temp)!=h.end())
   {
     if(temp->next==NULL)
      free(temp);
     else
     {
      lnode tt = temp;
      lnode temp1 = temp->next;
      temp->data = temp1->data;
      temp->next = temp1->next;
      delete [] temp1 ;
      temp = tt;
     }
   }
   else
    h.insert(temp);
 temp = temp->next;
 }
}

int main()
{
 lnode temp = NULL;
 temp = insert(temp,12);
 temp = insert(temp,11);
 temp = insert(temp,12);
 temp = insert(temp,11);
 temp = insert(temp,41);
 temp = insert(temp,43);
 temp = insert(temp,21);
// display(temp);
 removeDupli(temp);
 display(temp);
 return 0;
}

