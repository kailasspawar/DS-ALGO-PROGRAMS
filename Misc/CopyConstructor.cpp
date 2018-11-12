#include<iostream>
using namespace std;

class Point
{
   int x , y;
 public:
      Point(int i = 0,int j = 0)
      {
       x = i;
       y = j;
      }
       int getX()
       {
        return x;
       }
       int getY()
       {
        return y;
 	}
   };
  int main()
  {
   Point p1(10,20);
   Point p2 = p1;
   cout<<p2.getX()<<" "<<p2.getY()<<endl;
   return 0;
  }
