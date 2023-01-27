#include<iostream>
using namespace std;

int main()
{
    int i=1;
    int *p=&i;
    int **q=&p;

    cout<<i<<endl; //1
    cout<<&i<<endl; // address of i
    cout<<p<<endl;  // adress of i
    cout<<*p<<endl; // 1
    cout<<&p<<endl; //address of p
    cout<<q<<endl; // address of p
    cout<<*q<<endl; // address of i
    cout<<**q<<endl; //1 
}