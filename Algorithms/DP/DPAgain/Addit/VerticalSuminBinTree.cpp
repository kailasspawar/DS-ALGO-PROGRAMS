#include<bits/stdc++.h>
#include"bst.h"
using namespace std;

void printVertSum(bnode root,map<int,int>&Map,int hd)
{
  if(!root)
   return ;

  printVertSum(root->left,Map,hd-1);

 Map[hd]+=root->data;

 printVertSum(root->right,Map,hd+1);
}
void verticalSum(bnode root)
{
 if(!root) return;
  map<int,int>Map;

  printVertSum(root,Map,0);

 for(auto it = Map.begin();it!=Map.end();it++)
  cout<<it->first<<"->"<<it->second<<endl;

 cout<<endl;
}

int main()
{
  bnode root = newNode(1);
      root->left = newNode(2);
          root->right = newNode(3);
	      root->left->left = newNode(4);
	          root->left->right = newNode(5);
		      root->right->left = newNode(6);
		          root->right->right = newNode(7);
			      root->right->left->right = newNode(8);
			          root->right->right->right = newNode(9);
	verticalSum(root);
return 0;
}
