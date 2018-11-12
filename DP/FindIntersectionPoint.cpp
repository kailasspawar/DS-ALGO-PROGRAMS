#include<iostream>
#include"list.h"
#include<unordered_set>
using namespace std;

lnode intersecPoint(lnode a,lnode b)
{
	if(!a || !b) 
		return NULL;
	unordered_set<lnode>us;

	lnode curr = a;
	while(curr)
	{
		us.insert(curr);
		curr = curr->next;
	}
	curr = b;
	while(curr)
	{
		if(us.find(curr) != us.end())
			return curr;
		curr = curr->next;
	}
	return NULL;
}
int main()
{
	struct node* newnode;
	struct node* head1 =
		(struct node*) malloc(sizeof(struct node));
	head1->data  = 10;

	struct node* head2 =
		(struct node*) malloc(sizeof(struct node));
	head2->data  = 3;

	newnode = (struct node*) malloc (sizeof(struct node));
	newnode->data = 6;
	head2->next = newnode;

	newnode = (struct node*) malloc (sizeof(struct node));
	newnode->data = 9;
	head2->next->next = newnode;

	newnode = (struct node*) malloc (sizeof(struct node));
	newnode->data = 15;
	head1->next = newnode;
	head2->next->next->next  = newnode;

	newnode = (struct node*) malloc (sizeof(struct node));
	newnode->data = 30;
	head1->next->next= newnode;

	head1->next->next->next = NULL;
       lnode node = intersecPoint(head1,head2);
       node ? cout<<node->data<<endl : cout<<"No intersection point\n";
     return 0;
 }
