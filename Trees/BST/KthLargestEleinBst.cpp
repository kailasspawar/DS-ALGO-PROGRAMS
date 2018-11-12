#include<iostream>
#include"bst.h"
#include<stack>
using namespace std;

void kthLargest(node root,stack<int>&s,int k)
{
  if(!root)
    return;

    kthLargest(root->right,s,k);

    s.push(root->data);
    if(s.size()==k)
    {
     cout<<s.top()<<endl;
    return; 
   }
    kthLargest(root->left,s,k);
}

int main()
{
  node root = NULL;
  root = insert(root,12);
     insert(root,11);
        insert(root,5);
     insert(root,9);
   insert (root,15);
       insert(root,19);
   int k = 1;
 stack<int>s;
  kthLargest(root,s,k);

  return 0;
}
