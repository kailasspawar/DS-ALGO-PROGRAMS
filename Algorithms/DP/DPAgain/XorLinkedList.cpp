#include<iostream>
using namespace std;

struct node
{
  int data;
  node *npx;
};
typedef struct node *xnode;
xnode XOR(xnode a,xnode b)
{
  return (xnode) ((unsigned int) (a) ^ (unsigned int) (b));
}
typedef struct node *xnode;
void insert(xnode &list,int data)
{
  xnode newnode = new node();
  newnode->data = data;
  newnode->npx = XOR(list,NULL);
  if(list)
  {
    xnode next = XOR(list->npx,NULL);
    list->npx = XOR(newnode,next);
  }
 list = newnode;
}

void printList(xnode list)
{
  xnode prev = NULL;
    xnode curr = list,next;

  while(curr)
  {
    cout<<curr->data<<" ";
    next = XOR(prev,curr->npx);

    prev = curr;
    curr = next;
  }
  cout<<endl;
}

int main()
{
  xnode list = NULL;
  insert(list,10);
     insert(list,20);
        insert(list,30);
	   insert(list,40);
  printList(list);
 return 0;
}
