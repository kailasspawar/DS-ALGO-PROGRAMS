#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
 int data;
 struct node *next;
};
typedef struct node *lnode;

lnode create(lnode list,int ele)
{
  lnode newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = ele;
  newnode->next = NULL;
  lnode temp;
  if(list==NULL)
   list = temp = newnode;
  else
  {
    temp->next=newnode;
     temp = newnode;
  }
 return list;
 }

 void display(lnode list)
 {
   lnode temp = list;
   while(temp!=NULL)
   {
    cout<<temp->data<<"\t";
    temp = temp -> next;
   }
 }
void swap(lnode list,int x,int y)
{
  
  int i;
  lnode prevx = NULL;
  lnode currx = list;
  if(x==y)
    return;

  while(currx&&currx->data!=x)
  {
   prevx = currx;
   currx = currx->next;
  }
  lnode prevy = NULL;
  lnode curry = list;
  while(curry&&curry->data!=y)
  {
   prevy = curry;
   curry = curry->next;
  }
 
  if(currx==NULL||curry==NULL)
    return ;

  if(prevx!=NULL)
    prevx->next = curry;
  else
    list = curry;

  if(prevy!=NULL)
   	prevy->next = currx;
  else
   	list = currx;

  
  lnode temp = curry->next;
  curry->next = currx->next;
  currx->next = temp;
}
lnode reverse(lnode list,int k)
{
 int count = 0;
 lnode prev=NULL ,curr,next = NULL;
 curr = list;
 while(curr!=NULL&&count < k)
 {
   next = curr ->next;
   curr -> next = prev;
    prev = curr;
    curr = next;
  count ++;
 }
  if(next!=NULL)
   list->next   = reverse(next,k);

 return prev;
}
    
    

    
int main()
{
 lnode list = NULL;
  list = create(list,10);
  list = create(list,20);
  list = create(list,30);
  list = create(list,40);
  list = create(list,50);
  list = create(list,60);
  list = create(list,70);
 // swap(list,30,50);
  list = reverse(list,3);
   display(list);
  return 0;
 }


