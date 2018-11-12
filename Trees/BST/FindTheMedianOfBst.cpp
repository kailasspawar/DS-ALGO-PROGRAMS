#include<iostream>
#include"bst.h"
using namespace std;

int sizeofBst(node root)
{
 if(!root)
   return 0;
 else
   return 1 + sizeofBst(root->left) + sizeofBst(root->right);
}
void findmed(node root,int n,int &count)
{
  static int prev ;
  if(!root)
    return;

  findmed(root->left,n,count);

   count++;
   if(count == n/2+1 && n&1)
    cout<<root->data<<endl;
   else if(n%2==0&&count == n/2)
     prev = root->data;
   else if(count==n/2+1)
   {
    int val = (root->data+prev)/2;
     cout<<val<<endl;
   }

  findmed(root->right,n,count);
}

int main()
{
  node root = NULL;
    root = insert(root,6);
       insert(root,3);
       insert(root,8);
       insert(root,1);
       insert(root,4);
       insert(root,7);
       insert(root,9);
       insert(root,10);
   int count = 0;
    int n = sizeofBst(root);
   findmed(root,n,count);
 return 0;
}

