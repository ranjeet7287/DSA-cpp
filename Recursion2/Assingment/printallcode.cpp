// Print all Codes - String
// Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a 
// program to print the list of all possible codes that can be generated from the given string.
// Note : The order of codes are not important. Just print them in different lines.
// Input format :
// A numeric string S
// Output Format :
// All possible codes in different lines
// Constraints :
// 1 <= Length of String S <= 10
// Sample Input:
// 1123
// Sample Output:
// aabc
// kbc
// alc
// aaw
// kw

#include<iostream>
#include<cstring>
using namespace std;

void printallcode_help(string input,string output)
{
    // base case
    if(input.empty()){
        cout<<output<<endl;
        return;
    }
    int num=input[0]-48;
    char ch=num-1+'a';
    printallcode_help(input.substr(1),output+ch);
    if(input[1] != '\0'){ 
        num = num * 10 + input[1] - 48;
        ch = num - 1 + 'a';
        if(num >= 10 && num <= 26){
            printAllPossibleCodesHelper(input.substr(2), output + ch);
        }
    }
}

void   printallcode(string input){
    string output="";
    printallcode_help(input,output)
}

int main()
{
    string input;
    cin>>input;

    printallcode(input);
    return 0;
}