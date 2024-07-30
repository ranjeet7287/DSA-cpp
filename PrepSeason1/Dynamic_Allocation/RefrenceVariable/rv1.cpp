#include<iostream>
using namespace std;

int main()
{
    int i=10;
    int &j=i;
    // No other memory declare for j just pointing to same memory
    
    // ex--> Let's take a an example if person have two name if we call from any one name 
    // out of two it point to same person so it just like this in pass by refrence value

    cout<<i<<endl; //10
    cout<<j<<endl; //10
    j++;
    cout<<i<<endl; //11
    cout<<j<<endl; //11
    i++;
    cout<<i<<endl; //12
    cout<<j<<endl; //12
}