#include<iostream>
#include<stack>
using namespace std;

int maxDepth(string str)
{
 int max_depth  = 0;
  stack<char>stk;
 for(int i = 0;i<str.length();i++)
 {
   if(str[i] == '(')
    stk.push('(');

   if(stk.size() > max_depth)
     max_depth = stk.size();

   if(str[i] == ')')
    stk.pop();
  }
  return max_depth ;
}

int main()
{
  string str = "( ((x)) (((y)) )" ;
  cout<<maxDepth(str)<<endl;
 return 0;
}
