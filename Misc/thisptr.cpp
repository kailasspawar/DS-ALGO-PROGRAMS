#include<iostream>
using namespace std;
class student
{
  int rno;
  string name;
  
  public:
	student(int r,string n)
        {
          this->rno = r;
	  this->name = n;
	}
        void display()
	{
	 cout<<"rno="<<rno<<"\n"<<"name="<<name<<endl;
	}
};

int main()
{
 student s(111,"prem");
 s.display();
 return 0;
}
