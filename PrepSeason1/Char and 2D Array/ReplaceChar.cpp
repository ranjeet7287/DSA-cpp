/*
Replace Character
Send Feedback
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)
Output Format :
Updated string
Note :
You don't need to output anything. Just implement the given function.
Constraints :
1 <= Length of String S <= 10^6
Sample Input :
abacd
a x
Sample Output :
xbxcd
*/
#include <iostream>
#include <cstring>
using namespace std;
void replaceCharacter(char input[], char c1, char c2)
{
    int len=0;
    for(int i=0;input[i]!='\0';i++)
    {
        len++;
    }
    for(int j=0;j<len;j++)
    {
        if(input[j]==c1)
        {
            input[j]=c2;
        }
    }
}
int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}