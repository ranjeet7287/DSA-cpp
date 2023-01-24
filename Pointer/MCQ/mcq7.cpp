#include<iostream>
using namespace std;
int main()
{
    int a = 50;
    int *ptr = &a;
    cout<<(*ptr)++<<" ";
    cout<<a<<endl;
    // 50 51 
}