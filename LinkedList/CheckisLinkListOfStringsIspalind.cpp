#include<iostream>
#include<vector>

using namespace std;

struct node
{
  string data;
  node *next;
};
typedef struct node *lnode;
lnode insert(lnode list,string ele)
{
  if(!list)
  {
    lnode newnode = new node();
    newnode->data = ele;
   list = newnode;
   return list;
  }
  else
   list->next = insert(list->next,ele);

  return list;
}
bool isPalind(string str)
{
  int n = str.length();
  for(int i = 0;i<n/2;i++)
   if(str[i]!=str[n-i-1])
    return false;

  return true;
}

bool isPalindrome(lnode list)
{
  vector<string>v;
  lnode temp = list;
  while(temp)
  {
    v.push_back(temp->data);
    temp = temp->next;
  }
 string str = "";  
 for(string x:v)
  str = str+x;

  return isPalind(str);
}
void display(lnode list)
{
  lnode temp = list;
  while(temp)
  {
   cout<<temp->data<<" ";
   temp = temp->next;
  }
 cout<<endl;
}
int main()
{
 lnode list = NULL;
   list = insert(list,"a");
   list =  insert(list,"bc");
	  insert(list,"d");
	  insert(list,"dcb");
	  insert(list,"a");
   display(list);
   isPalindrome(list) ? cout<<"Given List is Palindrome\n" : 
                        cout<<"Not Palindrome\n";
  return 0 ;
}

