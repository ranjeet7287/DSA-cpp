#include<iostream>
using namespace std;

inline int max(int a,int b) // -- > inline funtion (learn more in google)
{
    return (a>b) ? a : b; // Tertiary Operator 
}

int main()
{
    int a,b;
    cin>>a>>b;
    int c=max(a,b);
    cout<<c<<endl;
}