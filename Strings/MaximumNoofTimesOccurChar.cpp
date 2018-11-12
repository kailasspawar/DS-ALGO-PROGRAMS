#include<iostream>
using namespace  std;
void maximumcharoccr (string str)
{
  int count[256] = {0};
  
  for(int i = 0;i<str.size();i++)
   count[str[i]]++;

  int max = -1,ind;
  for(int i = 0;i<str.size();i++)
  {
    if(max < count[str[i]])
    {
       max = count[str[i]];
         ind = i;
    }
  }
  if(max > 1)
    cout<<str[ind]<<endl;
  else
    cout<<"All ele occurs only ones\n";
}

int main()
{
  string str = "kailas suresh pawar";
  cout<<str<<endl;  
   maximumcharoccr(str);
 return 0;
}
