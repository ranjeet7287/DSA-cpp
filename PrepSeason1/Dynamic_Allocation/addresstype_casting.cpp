#include<iostream>
using namespace std;

int main()
{
    int i=65;
    int *p=&i;
    char *ps=(char*)p; // Explicit Casting


    cout<<p<<endl;
    cout<<ps<<endl;


    cout<<*p<<endl; // 65
    cout<<*ps<<endl; // A
    cout<<*(ps+1)<<endl; // endl
    cout<<*(ps+2)<<endl; //endl 
    cout<<*(ps+3)<<endl; // endl
}