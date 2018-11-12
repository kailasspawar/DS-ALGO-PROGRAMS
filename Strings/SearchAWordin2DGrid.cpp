#include<iostream>
#define R 3
#define C 14
using namespace std;

bool search2D(char grid[R][C],int row,int col,string word)
{
  if(grid[row][col] != word[0])
    return false;

  int x[] = {1,-1,0,1,-1,0,1,-1};
  int y[] = {-1,1,1,0,0,-1,1,-1};
     int len = word.length();
  for(int dir = 0;dir < 8;dir++)
  {
     int k , rd = row+x[dir],cd = col + y[dir];

     for(int k = 1;k<len;k++)
     {
        if(rd >= R || rd < 0 || cd >= R || cd < 0)
	  break;
	if(grid[rd][cd] != word[k])
	  break;

        rd+=x[dir] ; cd+=y[dir]; 
     }

    if(k==len)
      return true;
  }
 return false;
}

void patternSearch(char grid[R][C],string word)
{
  for(int i = 0;i<R;i++)
    for(int j = 0;j<C;j++)
      if(search2D(grid,i,j,word))
       cout<<"Pat found at "<<i<<" "<<j<<endl;
}

int main()
{
  char grid[R][C] = {"GEEKSFORGEEKS",
  	             "GEEKSQUIZGEEK",
		     "IDEQAPRACTICE"};
		 string word = "EEE";
  patternSearch(grid,word);
 return 0;
}
