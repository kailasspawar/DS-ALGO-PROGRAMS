#include<iostream>
#include<algorithm>
using namespace std;

class Student
{
  int rno ;
   string name;
  int marks;
 public: 
   Student(int r,string n,int m)
   {
     rno = r;
     name = n;
     marks = m;
   }

   void display();
  friend int operator+(Student a,Student b);
 friend ostream &operator<<(ostream &os,Student s);
};

void Student:: display()
{
  cout<<rno<<endl;
    cout<<name<<endl;
   cout<<marks<<endl;
}
int operator+(Student a,Student b)
{
  return (a.marks + b.marks);
}
ostream &operator<<(ostream &os,Student s)
{
  os<<s.rno<<" "<<s.name<<" "<<s.marks<<endl;
}
int main()
{
  Student S(111,"prem",98);
  S.display();
  Student P(222,"rohit",65);
  int c = S + P;
  cout<<P<<endl;
  cout<<c<<endl;

 int arr[] = {5,1,2,6,9,3,27,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,greater<int>());
   for(int i : arr)
    cout<<i<<" ";
   cout<<endl;
 return 0;
}
