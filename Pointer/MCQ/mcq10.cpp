#include<iostream>
using namespace std;
int main()
{
    float f = 10.5;
    float p = 2.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr<<" "<<f<<" "<< p;
    // 2.5 2.5 2.5 
    // ptr points to f. f is incremented by 1 
    // through ptr (f = 11.5 now). f = p using ptr (f = 2.5 now).
}