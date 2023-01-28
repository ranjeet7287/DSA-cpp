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

// Inline functions are useful when Function is small and we want to avoid function call overhead
// Inline functions are used to reduce the function call overhead. Inline function is a function that is expanded in line when it is called.