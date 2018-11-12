/*
Before we go further, let us understand with few examples:
    ab: Number of insertions required is 1. bab
    aa: Number of insertions required is 0. aa
    abcd: Number of insertions required is 3. dcbabcd
    abcda: Number of insertions required is 2. adcbcda which is same as number of insertions in the substring bcd(Why?).
    abcde: Number of insertions required is 4. edcbabcde
*/
#include<iostream>
#include<string.h>
using namespace std;

 int findMin(string str,int n)
 {
   int table[n][n]= {0},l,h,gap;
   
   
 //  memset(table,0,sizeof(table));

   for(gap = 1 ; gap < n;gap++)
    for(l = 0,h = gap;h<n;l++,h++)
     table[l][h] = (str[l]==str[h]) ? table[l+1][h-1] : 
        (min(table[l][h-1],table[l+1][h])+1);
  return table[0][n-1];
 }

 int main()
 {
  string str = "geeks";
   int n = str.length();

   cout<<findMin(str,n)<<endl;

  return 0;
 }

