#include<iostream>
#include<algorithm>
using namespace std;

struct Box
{
  int h,w,d;
};

bool compare(Box a,Box b)
{
  return (a.w * a.d > b.w * b.d);
}
int maxStackHeight(Box arr[],int n)
{
  Box rot[3*n];
  int index = 0;
  for(int i = 0;i<n;i++)
  {
    rot[index] = arr[i];
    index++;

    rot[index].h = arr[i].w;
    rot[index].d = max(arr[i].h,arr[i].d);
    rot[index].w = min(arr[i].h,arr[i].d);
    index++;

    rot[index].h = arr[i].d;
    rot[index].d = max(arr[i].h,arr[i].w);
    rot[index].w = min(arr[i].h,arr[i].w);
    index++;
  }
   n = 3*n;
  sort(rot,rot+n,compare);
  int msh[n];
  for(int i = 0;i<n;i++)
   msh[i] = rot[i].h;

  for(int i = 1;i<n;i++)
   for(int j = 0;j<i;j++)
    if(rot[i].w < rot[j].w &&
       rot[i].d < rot[j].d &&
       msh[i] < msh[j] + rot[i].h)
      msh[i] = msh[j] + rot[i].h;
  int maxx = -1;
  for(int i = 0;i<n;i++)
   if(maxx < msh[i])
    maxx = msh[i];
  return maxx;
}

int main()
{
  Box arr[] = { {4, 6, 7}, {1, 2, 3}, {4, 5, 6}, {10, 12, 32} };
    int n = sizeof(arr)/sizeof(arr[0]);
   cout<<maxStackHeight(arr,n)<<endl;
   return 0;
}
