#include<iostream>
#include"bst.h"
#include<stack>
using namespace std;

void inorderItr(node root1)
{

  node root = root1;
  stack<node>s;
  bool done = false;
  while(!done)
  {
    if(root!=NULL)
    {
      s.push(root);
      root = root->left;
    }
   else 
   {
    if(s.empty()==false){
    cout<<s.top()->data<<" ";
    root = s.top()->right;
    s.pop();
    }
   else
      done = true;
  }
}
cout<<endl;
}

int main()
{
  node root  = NULL;
    root = insert(root,10);
    root = insert(root,5);
    root = insert(root,8);
    root = insert(root,2);
    root = insert(root,20);  
    inorderItr(root);
 return 0;
}
