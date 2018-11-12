#include<iostream>
#include<stack>
using namespace std;

int maxRectArea(int hist[],int n)
{
  stack<int>s;
   int tp,max_area = 0,area_with_tp;

  int i = 0;
  while(i < n)
  {
    if(s.empty() || hist[s.top()] <= hist[i])
     s.push(i++);

    else
    {
      tp = s.top();
      s.pop();
      area_with_tp = hist[tp] * (s.empty() ? i : i-s.top()-1);

      max_area = max(max_area,area_with_tp);
    }
  }
  while(!s.empty())
  {
    tp = s.top();
    s.pop();
      area_with_tp = hist[tp] * (s.empty() ? i : i-s.top()-1);

      max_area = max(max_area,area_with_tp);
  }
 return max_area;
}

int main()
{
  int hist[] = {6,2,5,4,5,1,6};
     int size = sizeof(hist)/sizeof(hist[0]);
 cout<<"The max area is "<<maxRectArea(hist,size)<<endl;
 return 0;
}

