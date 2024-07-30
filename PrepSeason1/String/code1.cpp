#include<iostream>
using namespace std;

int main()
{
    // defination
    string s1="abcd";
    cout<<s1<<endl;

    // deceleration
    string s2;
    s2="def";
    cout<<s2<<endl;

    // Dynamically
    string *s3=new string;
    *s3="pqrs";
    cout<<s3<<endl; // address of string
    cout<<*s3<<endl; // pqrs


    // Input
    string s4;
    // cin>>s4;
    getline(cin,s4);
    cout<<s4<<endl;


    // Treating like a array
    string s5="ranjeet";
    cout<<s5[0]<<endl; //r
    s5[0]='h';
    cout<<s5<<endl;

    // adding string
    string s6="ranjeet ",s7="love's r...";
    string love=s6+s7;
    cout<<love<<endl;

    // Size
    string s8="ranjeet";
    cout<<s8.size()<<endl; //7
    cout<<s8.length()<<endl; // 7

    // Sub part of string
    string s9="ranjeet";
    cout<<s9.substr(3)<<endl; // string from 3 index to end index.    // jeet
    cout<<s9.substr(3,2)<<endl; // string from 3 index to only 2 lenght  //je



    // find
    string s10="riya";
    cout<<s10.find("i")<<endl; // give first index
    
}