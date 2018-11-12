// C++ program to print all occurrences of every character
// together.
# include<bits/stdc++.h>
using namespace std;
 
// Since only lower case characters are there
const int MAX_CHAR = 26;
 
// Function to print the string
void printGrouped(string str)
{
    int n = str.length();
 
    // Initialize counts of all characters as 0
    int  count[MAX_CHAR] = {0};
 
    // Count occurrences of all characters in string
    for (int i = 0 ; i < n ; i++)
        count[str[i]-'a']++;
   
    // Starts traversing the string
    for (int i = 0; i < n ; i++)
    {
        // Print the character till its count in
        // hash array
        while (count[str[i]-'a']--)
            cout << str[i];
 
        // Make this character's count value as 0.
        count[str[i]-'a'] = 0;
    }
}
 
// Driver code
int main()
{
    string str = "geeksforgeeks";
 
    printGrouped(str);
    cout<<str[4]-'a'<<endl; 
    return 0;
}

