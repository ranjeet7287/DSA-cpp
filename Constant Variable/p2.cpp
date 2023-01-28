#include<iostream>
using namespace std;
int main()
{
    const int i=9;
    // int *p=&i; <-- Error we can't store adress of 
    const int *p=&i;
    
    int j=4;
    const int *h=&j;
    


}