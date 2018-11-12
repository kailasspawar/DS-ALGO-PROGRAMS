#include<iostream>
#include"Bintree.h"
using namespace std;

void findDiff(bnode root,int &sum1,int &sum2,int level)
{
  if(!root)
    return ;

  if(level & 1)
   sum1+=root->data;
  else
   sum2+=root->data;

  findDiff(root->left,sum1,sum2,level+1);
     findDiff(root->right,sum1,sum2,level+1);
}
int sumDiff(bnode root)
{
  int sum1 = 0,sum2 = 0;
  findDiff(root,sum1,sum2,0);

  return (sum2-sum1);
}
int getLevelDiff(bnode root)
{
  if(!root)
    return 0;
  return root->data - getLevelDiff(root->left) - 
         getLevelDiff(root->right);
}
int main()
{
  bnode root = newNode(5);
    root->left = newNode(2);
    root->right = newNode(6);
   root->left->left = newNode(1);
   root->left->right = newNode(4);
   root->left->right->left = newNode(3);
   root->right->right = newNode(8);
   root->right->right->left = newNode(7);
   root->right->right->right = newNode(9);

  cout<<sumDiff(root)<<endl;
      cout<<"The diff is "<<getLevelDiff(root)<<endl;
 return 0;
}

