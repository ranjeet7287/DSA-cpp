// For what values of the x is an if-statement block not executed ?
#include<iostream>
using namespace std;
int main()
{
    int x=0;
    if((1+x) != (1-x)) 
    {
    cout<<"In if block";
    }
}
/*
Solution Description
The if-statement block is only not executed when the value of x is  0. 
For all other values, it will be treated as true.
*/