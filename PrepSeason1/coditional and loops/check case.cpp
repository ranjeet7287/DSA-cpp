/*
Write a program that takes a character as input and prints
 either 1, 0 or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabet
*/
#include<iostream>
using namespace std;
int main()
{
    char n;
    cin>>n;
    if(n>='A' && n<='Z'){
        cout<<"1";
    }else if (n>='a' && n<='z')
    {
        cout<<"0";
    }else{
        cout<<"-1";
    }
}