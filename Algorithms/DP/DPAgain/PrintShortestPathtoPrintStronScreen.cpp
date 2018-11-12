#include<iostream>
using namespace std;

/*  screen 
   A B C D E 
   F G H I J
   K L M N O
   P Q R S T 
   U V W X Y
   Z 
 */

 void printPath(string str)
 {
   int i = 0;
   int currX = 0,currY = 0;
   while(i < str.length())
   {
     int nextX = (str[i] - 'A') / 5;
     int nextY = (str[i] - 'B' + 1) % 5;
     while(currX > nextX)
     {
      cout<<"Move Up"<<endl;
      currX--;
     }
     while(currY > nextY)
     {
       cout<<"Move Left"<<endl;
       currY--;
     }
     while(currX < nextX)
     {
      cout<<"Move Down"<<endl;
      currX++;
     }
     while(currY < nextY)
     {
      cout<<"Move Right"<<endl;
      currY++;
     }
     
     cout<<"Press OK"<<endl;
     i++;
  }
}

int main()
{
  string str = "GEEK";
  printPath(str);
 return 0;
}
