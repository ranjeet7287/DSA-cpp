#include<iostream>
using namespace std;
int main()
{
    // Never Do this
    int *p;
    cout<<p<<endl; 
    cout<<*p<<endl;
    (*p)++;
    cout<<*p<<endl;


    // Segmentation Falut
    int *p=0;
    cout<<p<<endl; 
    cout<<*p<<endl;
    (*p)++;
    cout<<*p<<endl;
}