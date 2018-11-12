#include<iostream>
#include"bint.h"
using namespace std;

bnode convert(string expr,int i)
{
  int size = expr.size();
  if(i >= size)
    return NULL;

  bnode root = newNode(expr[i]);
 ++i;

  if(i < size && expr[i] == '?')
    root->left = convert(expr,i+1);
  else if(i< size)
    root->right = convert(expr,i+1);

 return root;
}
void print(bnode root)
{
  if(root)
  {
    cout<<char(root->data)<<" ";
    print(root->left);
    print(root->right);
  }
} 
int main()
{
  string str = "a?b?c:d:e";
    bnode root = convert(str,0);
 print(root);
 cout<<endl;
return 0;
}
