#include<iostream>
using namespace std;
int main()
{
    char b[]="abcd";
    cout<<b<<endl; //abcd
    
    char *c=&b[0];
    cout<<c<<endl; //abcd 


    // without array
    char i='j';
    char *f=&i;
    cout<<f<<endl; // j it will print till where it does'nt find null charcter('\0')
}