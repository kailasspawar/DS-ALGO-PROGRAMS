#include<iostream>
#include<vector>
#define M 26
using namespace std;
void dfs(vector<int>g[],int u,vector<bool>&visited)
{
  visited[u] = true;
  for(int i = 0;i<g[u].size();++i)
   if(!visited[g[u][i]])
    dfs(g,g[u][i],visited);
}
bool isConnected(vector<int>g[],vector<bool>&mark,int s)
{
  vector<bool>visit(M,false);

  dfs(g,s,visit);

  for(int i = 0;i<M;i++)
  {
    if(mark[i] && !visit[i])
     return false;

  }
 return true;
}

bool possibleOrderAmongStrings(string arr[],int n)
{
  
  vector<int> g[M];
    vector<bool>mark(M,false);

  vector<int>in(M,0) , out(M,0);

  for(int i = 0;i<n;i++)
  {
    int f = arr[i].front() - 'a';
      int l = arr[i].back()-'a';

    mark[f] = mark[l] = true;

    in[f]++;
    out[l]++;

   g[f].push_back(l);
  }

  for(int i = 0;i < M;i++)
   if(in[i]!=out[i])
    return false;

  return isConnected(g,mark,arr[0].front()-'a');
}

int main()
{
  string arr[] = {"ab", "bc", "cd", "de", "ed", "da"};
      int n = sizeof(arr) / sizeof(arr[0]);
     possibleOrderAmongStrings(arr,n) ? cout<<"Ordering possible\n" :
                               cout<<"Ordering not possible\n";
	return  0;
}
