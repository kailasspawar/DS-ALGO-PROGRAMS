//  A C++ Program to find the longest common prefix
#include<bits/stdc++.h>
using namespace std;
 
// A Utility Function to find the common prefix between
// strings- str1 and str2
string commonPrefixUtil(string str1, string str2)
{
    string result = "";
    int n1 = str1.length(), n2 = str2.length();
 
    // Compare str1 and str2
    for (int i=0, j=0; i< n1&&j<n2; i++,j++)
    {
        if (str1[i] == str2[j])
         result.push_back(str1[i]);
        else
            break;
    }
 
    return (result);
}
 
// A Function that returns the longest common prefix
// from the array of strings
string commonPrefix (string arr[], int n)
{
    string prefix =  commonPrefixUtil(arr[0],arr[1]);
 
    for (int i=2; i<=n-1; i++)
        prefix = commonPrefixUtil(prefix, arr[i]);
 
    return (prefix);
}
 
// Driver program to test above function
int main()
{
    string arr[] = {"geeksforgeeks", "geeks",
                    "geek", "geezer"};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    string ans = commonPrefix(arr, n);
 
    if (ans.length())
      cout<<ans<<endl;
    else
        printf("There is no common prefix");
 
    return (0);
}
