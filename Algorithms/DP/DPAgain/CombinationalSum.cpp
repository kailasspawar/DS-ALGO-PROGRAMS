#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findCombinationSum(vector<int>&ar,int sum,vector<vector<int> >&res,vector<int>r,int i)
{
  if(sum < 0)
   return ;

  if(sum == 0)
  {
    res.push_back(r);
    return ;
  }

  while(i < ar.size() && sum-ar[i] >= 0)
  {
    r.push_back(ar[i]);

    findCombinationSum(ar,sum-ar[i],res,r,i);
    i++;

    r.pop_back();
  }
}

vector<vector<int> > combinationSum(vector<int>&ar,int sum)
{
  sort(ar.begin(),ar.end());

  ar.erase(unique(ar.begin(),ar.end()),ar.end());

  vector<int>r;
     vector<vector<int> >res;
   findCombinationSum(ar,sum,res,r,0);

  return res;
}

int main()
{
  vector<int>vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(6);
    vec.push_back(8);
   int sum = 8;
   vector<vector<int> > res = combinationSum(vec,sum);

   if(res.size() > 0)
   {
     for(auto i :res)
     { 
      cout<<"[ ";
      for(auto j : i)
        cout<<j<<" ";
      cout<<"]";
     cout<<endl;
    }
   }
   else
    cout<<"Empty\n";
  return 0;
}
