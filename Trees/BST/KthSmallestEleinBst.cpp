#include<iostream>
#include"bst.h"
#include<stack>
using namespace std;

void kthSmallest(node root,int &c,int k)
{
  if(!root || c>=k)
   return ;

    kthSmallest(root->left,c,k);
   c++;

      if(c==k)
      {
       cout<<root->data<<endl;
        return; 
     }

    kthSmallest(root->right,c,k);
 
}

int main()
{
   node root = NULL;
   root =  insert(root,10);
       insert(root,5);
        insert(root,2);
         insert(root,12);
          insert(root,7);
           insert(root,15);

  inorder(root);
    cout<<endl;
   int c = 0;
  kthSmallest(root,c,6);
return 0;
}
