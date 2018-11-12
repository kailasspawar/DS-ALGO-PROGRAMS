#include<iostream>
#include<map>
#include<vector>
using namespace std;

string getKey(string str)
{
	bool count[26] = {false};

	for(int i = 0;i<str.length();i++)
		count[str[i]-'a']=true;
	string res = "";
	for(int i = 0;i<26;i++)
		if(count[i])
			res = res + (char)('a'+i);

	return res;
}
void groupTogether(string arr[],int n)
{
	map<string,vector<string> >m;

	for(int i = 0;i<n;i++)
	{
		string key = getKey(arr[i]);
		m[key].push_back(arr[i]);
	}
	for(auto it = m.begin();it!=m.end();it++)
	{
		for(auto itr = it->second.begin();itr!=it->second.end();itr++)
			cout<<*itr<<" ";
		cout<<endl;
	}
}
int main()
{
	string words[] = { "may", "student", "students", "dog",
		"studentssess", "god", "cat", "act", "tab",
		"bat", "flow", "wolf", "lambs", "amy", "yam",
		"balms", "looped", "poodle"};

	int n = sizeof(words)/sizeof(words[0]);
	groupTogether(words,n);
	return 0;
}

