#include<iostream>
#include"bint.h"
#include<map>
#include<vector>
using namespace std;

void findMinMax(bnode root,int hd,int &minval,int &maxval)
{
  if(!root)
   return;
  if(hd > maxval)
    maxval = hd;
  else if(hd < minval)
   minval = hd;
  
 findMinMax(root->left,hd-1,minval,maxval);
   findMinMax(root->right,hd+1,minval,maxval);
}
void printVerticalLevel(bnode root,int lineno,int hd)
{
  if(!root)  
    return ;
  if(lineno == hd)
   cout<<root->data<<" ";

  printVerticalLevel(root->left,lineno,hd-1);
     printVerticalLevel(root->right,lineno,hd+1);
}

void printVertical(bnode root)
{
  int min1 = 0,max1 = 0;
  findMinMax(root,0,min1,max1);

  for(int i = min1;i<= max1;i++)
  {
   printVerticalLevel(root,i,0);
    cout<<endl;
  }
}

void getVerticalOrder(bnode root,int hd,map<int,vector<int> >&m)
{
  if(!root)
    return;
  m[hd].push_back(root->data);
    getVerticalOrder(root->left,hd-1,m);
       getVerticalOrder(root->right,hd+1,m);
}
void printVerticalOrder(bnode root)
{
  int hd = 0;
  map<int,vector<int> >m;
  getVerticalOrder(root,hd,m);

  for(auto it = m.begin();it!=m.end();it++)
  {
    for(auto itr = it->second.begin();itr!=it->second.end();itr++)
     cout<<*itr<<" ";
    cout<<endl;
  }
}
int main()
{
  bnode root = newNode(10);
     root->left = newNode(20);
        root->left->left = newNode(40); 
     root->right = newNode(30);
    root->left->right = newNode(50);
   root->right->left = newNode(60);
   root->right->right = newNode(70);
  printVertical(root);
  cout<<endl;
      printVerticalOrder(root);
 return 0;
}

