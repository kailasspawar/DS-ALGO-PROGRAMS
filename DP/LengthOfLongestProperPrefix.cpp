#include<iostream>
#include<vector>
using namespace std;
int compute_lps (vector <int> & lps, string pattern) {
	for (int i = 1, j = 0; i < pattern.size(); i++) {
		if (pattern [i] == pattern [j]) {
			lps [i] = j + 1;
			j++;
		} else if ( j != 0 ) {
			j = lps [ j - 1];
			i--; 
		} else {
			lps [i] = 0; 
		}
	}
  return lps[lps.size()-1];
}

int main()
{
	string str = "abcabc";
	vector<int>v(str.size(),0);
	cout<<"len is "<<compute_lps(v,str)<<endl;
	return 0;
}
