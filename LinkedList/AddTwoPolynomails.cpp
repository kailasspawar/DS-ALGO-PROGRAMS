#include<iostream>
using namespace std;

struct node
{
  int coeff;
     int exp;
  node *next;
};

typedef struct node *poly;


poly insert(poly list,int coeff,int exp)
{
  if(!list)
  {
    poly newnode = new node();
    newnode->coeff = coeff;
    newnode->exp = exp;
    newnode->next = NULL;
    return newnode;
  }
  else
    list->next = insert(list->next,coeff,exp);

 return list;
}

void display(poly list)
{
  while(list)
  { 
    cout<<list->coeff<<"x"<<"^"<<list->exp<<"->";
    list = list->next;
  }
 cout<<endl;
}
void addPoly(poly list1,poly list2,poly list)
{
  while(list1->next && list2->next)
  {
    if(list1->exp > list2->exp)
    {
     list->coeff = list1->coeff;
     list->exp = list1->exp;
      list1 = list1->next;
    }
    else if(list1->exp < list2->exp)
    {
      list->coeff = list2->coeff;
      list->exp = list2->exp;
      list2 = list2->next;
    }
    else
    {
      list->exp = list1->exp;
      list->coeff = list1->coeff + list2->coeff;
      list1 = list1->next ;
      list2 = list2->next;
    }
    list->next = new node();
    list = list->next;
    list->next  = NULL;
  }

  while(list1->next || list2->next)
  {
    if(list1->next)
    {
     list->coeff = list1->coeff;
     list->exp = list1->exp;
     list1 = list1->next;
    }
    if(list2->next)
    {
     list->coeff = list2->coeff;
     list->exp = list2->exp;
     list2 = list2->next;
    }
   list->next = new node();
   list = list->next ;
   list->next = NULL;
 }
}

int main()
{
 poly list = NULL;
  list = insert(list,5,2);
      insert(list,4,1);
      insert(list,2,0);
   poly list1 = NULL;
  list1 = insert(list1,5,1);
          insert(list1,5,0);
  poly list2 = new node();
  addPoly(list,list1,list2);

   display(list2);
  return 0;
}

