// Lenght --> strlen(string_name)
// to use strlen funtion we need to include cstring file
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char input[100];
    cin>>(input);
    int len=strlen(input);
    cout<<len;
}