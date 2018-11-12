#include<bits/stdc++.h>
using namespace std;

int main()
{
   queue< int > Q;        // Construct an empty queue
  for ( int i = 0; i < 3; i++ )
    Q.push( i );         // Pushes i to the end of the queue
  // Q is now { “0”, “1”, “2” }  
  int sz = Q.size();     // Size of queue is 3
  while( !Q.empty() ) {      // Print until Q is empty
    int element = Q.front(); // Retrieve the front of the queue
    Q.pop();                 // REMEMBER to remove the element!
    cout << element << endl; // Prints queue line by line
  }

 return 0;
}
