// What is the bnefit of refernce variable ?
// it help in function calling it show the changes into main aswell
#include<iostream>
using namespace std;

// Without Refrence variable.
void increment(int n)
{
    n++;
}
// With Refrence variable.
void decrement(int &n)
{
    n--;
}
int main()
{
    int i=10;
    increment(i);
    cout<<i<<endl; // 10
    decrement(i);
    cout<<i<<endl; // 9
}
