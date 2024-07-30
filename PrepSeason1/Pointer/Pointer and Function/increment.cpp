#include<iostream>
using namespace std;

void print(int *p)
{
    cout<<*p<<endl;
}
void incrementPointer(int *p)
{
    // Pass by Value doesn't reflect any changes
    p=p+1; 
}

void increment(int *p)
{
    // It reflect beacouse it changes i the same address
    (*p)++;
}
int main()
{
    int i=10;
    int *p=&i;

    print(p);

    cout<<p<<endl;
    incrementPointer(p);
    cout<<p<<endl;


    cout<<*p<<endl; // 10
    increment(p);
    cout<<*p<<endl; // 11

}