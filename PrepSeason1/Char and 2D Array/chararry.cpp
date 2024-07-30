#include<iostream>
using namespace std;

int main()
{
    char name[100];
    cout<<"Enter Your Name : ";
    // Like integer Array we don't use loop in the character Array and also for print
    cin>>name;
    // Every Character End with NULL Character which is '\0' for terminator it's only in char array
    cout<<"Name : "<<name<<endl;
}