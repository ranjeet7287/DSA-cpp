#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int *p=&i;
    int **q=&p;
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
}