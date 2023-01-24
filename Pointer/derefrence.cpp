#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int *p=&i;
    cout<<p<<endl;  // 0x61ff04 p store the adress of i .
    cout<<&i<<endl; // 0x61ff04 printing address of i .

    // p-->  address of i
    // *p--> value of i --> 1 (de-refrence value)
    cout<<*p<<endl;  // 1
    cout<<i<<endl;

}