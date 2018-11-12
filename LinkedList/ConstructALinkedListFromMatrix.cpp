#include<iostream>
#define m 3
#define n 3
using namespace std;

struct node
{
  int data;
  node *next , *down;
};

typedef struct node *lnode;

lnode construct(int arr[m][n],int i,int j)
{
  if(i > n-1 || j > m-1) 
    return NULL;

  lnode temp = new node();
  temp->data = arr[i][j];
  temp->next = construct(arr,i,j+1);
  temp->down = construct(arr,i+1,j);

  return temp;
}
void display(lnode list)
{
 lnode list1 = list;
  while(list1)
  {
    cout<<list1->data<<" ";
    list1 = list1->down;
  }
 cout<<endl;
}

int main()
{
  lnode list = NULL;
  int arr[m][n] = {{1,2,3},
                   {4,5,6},
		   {7,8,9}};
   list = construct(arr,0,0);
  display(list);
 return 0;
}

                       
