#include<iostream>
using namespace std;
int main()
{
    int a[10];
    cout<<a<<endl;
    cout<<&a[0]<<endl;

    a[0]=5;
    a[1]=3;
    cout<<*a<<endl;      // 5
    cout<<*(a+1)<<endl;  // 3

    // a[i] == *(a+i) 
    // i[a] == *(i+a)
    // a[i] == i[a] 

}