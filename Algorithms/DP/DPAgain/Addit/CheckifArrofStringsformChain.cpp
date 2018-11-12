#include<iostream>
#include<vector>
#define M 26
using namespace std;

void dfs(vector<int>g[],vector<bool>&visit,int u);
bool isConnected(vector<int>g[],vector<bool>&mark,int u);

bool possibleOrdering(string arr[],int n)
{
  vector<int>g[M]; 
  vector<bool>mark(M,false);

      vector<int>in(M,0),out(M,0);
   for(int i = 0;i<n;i++)
   {
      int f = arr[i].front() - 'a';
          int l = arr[i].back() - 'a';
      mark[f]= mark[l] = true;

     in[f]++;
        out[l]++;
     g[f].push_back(l);
   }
   for(int i = 0;i<M;i++)
    if(in[i]!=out[i])
     return false;

  return isConnected(g,mark,arr[0].front()-'a');
}
bool isConnected(vector<int>g[],vector<bool>&mark,int u)
{
  vector<bool>visit(M,false);
  dfs(g,visit,u);

  for(int i = 0;i < M;i++)
   if(mark[i] && !visit[i])
    return false;

 return true;
}
void dfs(vector<int>g[],vector<bool>&visit,int u)
{
 visit[u] = true;
 for(int i = 0;i<g[u].size();i++)
  if(!visit[g[u][i]])
   dfs(g,visit,g[u][i]);
}

int main()
{
  string arr[] = { "ab","bc","cd","de","ed","da"};
    int n = sizeof(arr)/sizeof(arr[0]);
   possibleOrdering(arr,n) ? 
     cout<<"Yes Ordering possible\n" :
         cout<<"No Ordering not possible\n" ;
 return 0;
}











 
