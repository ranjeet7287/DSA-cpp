#include<iostream>
using namespace std;
int main()
{
    int j=1;
    int *p=&j;// pointing to i
    int *q=p; // pointing to i
    cout<<&j<<endl;
    cout<<p<<endl;
    cout<<q<<endl;
}