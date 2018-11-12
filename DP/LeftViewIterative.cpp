#include<iostream>
#include"bst.h"
#include<queue>
using namespace std;

void leftView(bnode root)
{
  queue<bnode>q;
  q.push(root);

  while(!q.empty())
  {
     int i = q.size();

