//Given a linked list of co-ordinates where adjacent points either form a vertical line or a horizontal line. Delete points from the linked list which are in the middle of a horizontal or vertical line.

/*Input:  (0,10)->(1,10)->(5,10)->(7,10)
                                  |
                                (7,5)->(20,5)->(40,5)
Output: Linked List should be changed to following
        (0,10)->(7,10)
                  |
                (7,5)->(40,5) 
The given linked list represents a horizontal line from (0,10) 
to (7, 10) followed by a vertical line from (7, 10) to (7, 5), 
followed by a horizontal line from (7, 5) to (40, 5).

Input:     (2,3)->(4,3)->(6,3)->(10,3)->(12,3)
Output: Linked List should be changed to following
    (2,3)->(12,3) 
There is only one vertical line, so all middle points are removed.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
 int x;
 int y;
 node *next;
};

typedef struct node *lnode;
lnode insert(lnode list,int x,int y)
{
  if(list==NULL)
  {
   lnode newnode = new node();
   newnode->x = x;
   newnode->y = y;
   newnode->next = NULL;
   list = newnode;
  }
  else
   list->next = insert(list->next,x,y);
}
void display(lnode list)
{
  while(list)
  {
   cout<<"("<<list->x<<","<<list->y<<")"<<"->";
   list = list->next;
  }
 cout<<endl;
}
void deletenode(lnode list,lnode node)
{
 list->next = node->next;
 node->next = NULL;
 free(node);
}
lnode removeList(lnode list)
{
  if(list==NULL || list->next == NULL || list->next->next==NULL)
    return list;
  lnode next = list->next;
  lnode nextNext = next->next;

  if(list->x == next->x)
  {
   while(nextNext!=NULL&&nextNext->x==next->x)
   {
     deletenode(list,next);
     next = nextNext;
     nextNext = nextNext->next;
   }
  }
  else if(list->y == next->y)
  {
   while(nextNext!=NULL&&next->y==nextNext->y)
   {
    deletenode(list,next);
    next = nextNext;
    nextNext = nextNext->next;
    }
   }
 else
  {
   cout<<"List is Invalid\n";
    return NULL;
  }
 removeList(list->next);
}

int main()
{
 lnode head = NULL;
  
    head  =   insert(head, 40,5);
          insert(head, 20,5);
	      insert(head, 10,5);
	          insert(head, 10,8);
		      insert(head, 10,10);
		          insert(head, 3,10);
			      insert(head, 1,10);
			          insert(head, 0,10);
				      cout<<"Given Linked List: \n";
				          display(head);
					   
					       if (removeList(head) != NULL);
					           {
						           cout<<"Modified Linked List: \n";
							           display(head);
								       }
								           return 0;
}
