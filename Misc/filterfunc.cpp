#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
 
bool greathan(int value)
{return value >5;}
 
int main(void)
{
// vector container
vector <int> vec1;
// vector iterator
vector <int>::iterator Iter1, new_end;
int i, j;
 
// push data in range
for(i = 0; i <= 9; i++)
vec1.push_back(i);
for(j = 0; j <= 2; j++)
vec1.push_back(4);
cout<<"Original vec1 vector data is: ";
for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
cout<<*Iter1<<" ";
cout<<endl;
 
// randomly shuffle the data
random_shuffle(vec1.begin(), vec1.end());
cout<<"\nvec1 vector data randomly shuffled is: ";
for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
cout<<*Iter1<<" ";
cout<<endl;
// Remove elements satisfying predicate greater than
new_end = remove_if(vec1.begin(), vec1.end(), greathan);
cout<<"\nvec1 vector with elements greater than 5 removed is: ";
for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
cout<<*Iter1<<" ";
cout<<endl;
// using erase, to change the sequence size,
vec1.erase(new_end, vec1.end());
cout<<"\nvec1 vector with resized elements greater than 5 removed is: ";
for(Iter1 = vec1.begin(); Iter1 != vec1.end(); Iter1++)
cout<<*Iter1<<" ";
cout<<endl;
return 0;
}
