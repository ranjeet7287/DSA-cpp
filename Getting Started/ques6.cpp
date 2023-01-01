#include <iostream>
using namespace std;  
int main()
{
    double a = 55.5;
    int b = 55;
    // a = a % 10;  it will give error because % can’t be used with double or float.
    // b = b % 10;
    cout << a << " "  << b;
}