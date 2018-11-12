#include<iostream>
#include"Bintree.h"
using namespace std;
int Height(bnode root);
bool isHeightBal(bnode root,int &height)
{
  if(!root)
  {
   height = 0;
    return 1;
  }
  int lh = 0,rh = 0;
    int l = 0,r = 0;
  
     l = isHeightBal(root->left,lh);
   r = isHeightBal(root->right,rh);

  height = (lh > rh ? lh : rh) + 1;

  if(abs(lh-rh) >= 2)
    return false;
  else
    return l&&r;
}
  
int Height(bnode root)
{
  if(!root)
    return 0;
 return max(Height(root->left),Height(root->right))+ 1;
}

int main()
{
  bnode root = newNode(10);
      root->left = newNode(11);
         root->left->left = newNode(12);
	   root->left->left->left = newNode(13);
	root->right = newNode(14); 
    //   cout<<isHeightBal(root)<<endl;
  int height = 0;
  (isHeightBal(root,height)) ? cout<<"Yes\n" : cout<<"No\n";
    
    return 0;
}
  
 
