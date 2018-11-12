#include<iostream>
using namespace std;
struct node
{
  int data;
  node *npx;
};
typedef struct node *bnode;

bnode XOR(bnode a,bnode b)
{
 return (bnode) ((unsigned int)(a)^(unsigned int)(b));
}
void insert(bnode &head,int data)
{
 bnode newnode = new node();
 newnode->data = data;
 newnode->npx = XOR(head,NULL);

 if(head)
 {
   bnode next = XOR(head->npx,NULL);
    head->npx = XOR(newnode,next);
 }
head = newnode;
}

void printList(bnode head)
{
  bnode prev = NULL;
  bnode curr = head;
  bnode next ;
  while(curr)
  {
    cout<<curr->data<<" ";
    next = XOR(prev,curr->npx);
    prev = curr;
    curr = next;
  }
}
int main()
{
  bnode list = NULL;
    insert(list,10);
        insert(list,20);
	  insert(list,30);
    insert(list,40);
   printList(list);
  return 0;
}

