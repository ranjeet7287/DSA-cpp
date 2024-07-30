// Print Permutations
// Send Feedback
// Given an input string (STR), print all possible permutations of the input string.
// Note:
// The input string may contain the same characters, so there will also be the same permutations.
// The order of permutations doesn’t matter.
// Input Format:
// The only input line contains a string (STR) of alphabets in lower case
// Output Format:
// Print each permutations in a new line
// Constraint:
// 1<=length of STR<=8
// Time Limit: 1sec
// Sample Input 1:
// cba
// Sample Output 1:
// abc
// acb
// bac
// bca
// cab
// cba

#include<iostream>
#include<cstring>
using namespace std;

void printpermutation(string s,string output)
{
    // Base Case
    if(s.empty()){
        cout<<output<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        string small=s.substr(0,i)+s.substr(i+1);
        printpermutation(small,s[i]+output);
    }
}

int main()
{
    string s;
    cin>>s;
    string output="";
    printpermutation(s,output);
    return 0;
}