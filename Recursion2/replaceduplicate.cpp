// Remove Duplicates Recursively
// Send Feedback
// Given a string S, remove consecutive duplicates from it recursively.
// Input Format :
// String S
// Output Format :
// Output string
// Constraints :
// 1 <= |S| <= 10^3
// where |S| represents the length of string
// Sample Input 1 :
// aabccba
// Sample Output 1 :
// abcba
// Sample Input 2 :
// xxxyyyzwwzzz
// Sample Output 2 :
// xyzwz
#include <iostream>
#include<cstring>
using namespace std;
void removeConsecutiveDuplicates(char *input) 
{
    int len=strlen(input);
    if(len==0 || len==1)
    {
        return;
    }
    removeConsecutiveDuplicates(input+1);
    if(input[0]==input[1])
    {
        int i=1;
        for(;input[i]!='\0';i++)
        {
            input[i-1]=input[i];
        }
        input[i-1]=input[i];

    }


}
int main() 
{
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}