#include<iostream>
#include<stdlib.h>
using namespace std;

struct node 
{
  int data;
  struct node *next;
 };
typedef struct node *lnode;

lnode newNode(int ele)
{
 lnode newnode = new node();
 newnode->data = ele;
 newnode->next = NULL;
 return newnode;
}

lnode create(lnode list ,int ele)
{
  if(list==NULL)
  {
   list = newNode(ele);
    return list;
  }
 else
  list->next = create(list->next,ele);

 return list;
}
void display(lnode list)
{
 while(list!=NULL)
 {
  cout<<list->data<<" ";
  list = list->next;
 }
 cout<<"\n";
}

int search(lnode list,int ele)
{
 int i = 0;
 while(list!=NULL)
 {
   i++;
   if(list->data==ele)
     return i ;
   list = list->next;
 }
return -1;
}
bool searchrec(lnode list,int ele)
{
 if(list==NULL)
  return false;

 if(list->data==ele)
  return true;
 
 return searchrec(list->next,ele);
}
int main()
{
 lnode list = NULL;
 list = create(list,10);
 list = create(list,12);
 list = create(list,20);
 list = create(list,7);
 list = create(list,34);
 display(list);

 if(search(list,7)!=-1)
  cout<<"ele found at "<<search(list,7)<<"index"<<endl;
 else
  cout<<"ele is NOT found\n";
 
  searchrec(list,10) ? cout<<"Ele is Found\n" : cout<<"Ele is NOT Found\n";
 
 return 0;
}
 
