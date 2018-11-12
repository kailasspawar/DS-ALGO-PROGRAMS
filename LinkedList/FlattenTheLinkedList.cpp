#include<iostream>
#include<stdlib.h>
#include<set>
#include"list.h"
using namespace std;
/*
       5 -> 10 -> 19 -> 28
       |    |     |     |
       V    V     V     V
       7    20    22    35
       |          |     |
       V          V     V
       8          50    40
       |                |
       30               45

       o/p => 5->7->8->10->19->20->22->28->30->35->40->45->50->NULL
*/
struct Node 
{
 int data;
 Node *next;
 Node *bot;
};
typedef struct Node *llNode;
llNode newNode1(int ele)
{
 llNode newnode = new Node();
 newnode->data = ele;
 newnode->next = NULL;
 newnode->bot = NULL;
 return newnode;
}
void display1(llNode list)
{
 llNode temp;
  while(list!=NULL)
  {
  if(list->bot)
  {
   temp = list->bot;
   cout<<list->data<<" ";
   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp = temp->bot;
   }
  }
  list = list->next;
 }
 cout<<endl;
 }

lnode flatten(llNode list)
{
 if(list==NULL)
  return NULL;

 llNode temp;
 lnode slist = NULL;
 set<int>s;
  while(list!=NULL)
  {
   temp = list->bot;
   s.insert(list->data);
   while(temp!=NULL)
   {
    s.insert(temp->data);
    temp = temp->bot;
   }
  list = list->next;
  }
 set<int>:: iterator it;
 it = s.begin();
 slist = insert(slist,*it);
 it++;
 while(it!=s.end())
 {
   slist = insert(slist,*it);

   it++;
 }
 return slist;
}
int main()
{
 llNode list = NULL;
 list = newNode1(5);
 list->bot = newNode1(7);
 list->bot->bot = newNode1(8);
 list->bot->bot->bot = newNode1(30);
  
 list->next = newNode1(10);
 list->next->bot = newNode1(20);
 list->next->next = newNode1(19);
 list->next->next->bot = newNode1(22);
 list->next->next->bot->bot = newNode1(50);

 list->next->next->next = newNode1(28);
 list->next->next->next->bot = newNode1(35);
 list->next->next->next->bot->bot = newNode1(40);
 list->next->next->next->bot->bot->bot = newNode1(45);

 display1(list);
 lnode slist = NULL;
 slist = flatten(list);
 display(slist);
 return 0;
}
