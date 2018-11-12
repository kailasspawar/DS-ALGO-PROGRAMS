#include<iostream>
using namespace std;

class Area
{
 public : 
  int r;
    int l,b;
  
 public : 
     Area(int r,int l,int b)
     {
       this->r = r;
       this->l = l;
       this->b = b;
     }
   float carea();
};
float Area::carea()
{
  return (2*3.14*r);
}

class Rarea : public Area
{
  public :
      
       int rarea()
       {
         return l*b;
       }
};
int main()
{
 Area A(3,7,8);
    Rarea R;
  cout<<R.rarea()<<endl;
  cout<<A.carea()<<endl;
 return 0;
}

