// Check Palindrome (recursive)
// Send Feedback
// Check whether a given String S is a palindrome using recursion. Return true or false.
// Input Format :
// String S
// Output Format :
// 'true' or 'false'
// Constraints :
// 0 <= |S| <= 1000
// where |S| represents length of string S.
// Sample Input 1 :
// racecar
// Sample Output 1:
// true
// Sample Input 2 :
// ninja
// Sample Output 2:
// false
#include <iostream>
using namespace std;

#include<cstring>
bool help_fun(char *arr,int start,int end)
{
    if(start>=end){
        return true;
    }
    if(arr[start]!=arr[end]){
        return false;
    }
    bool small=help_fun(arr,start+1,end-1);
    return small;
}
bool checkPalindrome(char input[]) 
{
    int len=strlen(input);
    bool ans=help_fun(input,0,len-1);
    return ans;
}






int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
