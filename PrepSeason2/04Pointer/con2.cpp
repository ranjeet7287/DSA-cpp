#include<bits/stdc++.h>
using namespace std;


int main(){
    int i = 10;

    // Error
    // int *p = i; 
    // In C++, a pointer is supposed to store the address of a 
    // variable, not the value of the variable itself.

    int *p = &i; 
    cout<<p<<endl; // 0x61ff08
    cout<<*p<<endl; // 10

    i++;
    cout<<*p<<endl; // 11
    
    (*p)++;
    cout<<*p<<endl; // 12
    cout<<i<<endl;  // 12

    // p++;  don't increment address of p it will give garbage value
    cout<<*p<<endl; // 12


}