#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t,n;
     cin>>t;
     while(t--)
     {
         cin>>n;
         string str;
         cin>>str;
         int count[50] = {0};
       map<int ,char>m;
        //int count = 0;
        for(int i = 0;i<n;i++)
        {
          count[str[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++)
         cout<<it->second<<" ";
        cout<<endl;
     }
	//code
	return 0;
}
