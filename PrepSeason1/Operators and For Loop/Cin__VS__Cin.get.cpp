// Cin --> It ignore space,newline(enter),tab to read .
// cin.get() --> It dosen't ignore space,newline(enter),tab to read.
#include<iostream>
using namespace std;
int main()
{
    char c;
    // Using Cin
    cin>>c;
    int count=0;
    while(c!='$')
    {
        count++;
        cin>>c;
    }
    cout<<c;

    //Using cin.get();
    char ch;
    ch=cin.get();
    int count=0;
    while(ch!='$')
    {
        count++;
        ch=cin.get();
    }
    cout<<ch;
}