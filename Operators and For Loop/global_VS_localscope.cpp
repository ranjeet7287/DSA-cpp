#include<iostream>
using namespace std;
int main()
{
    int k=1; //Global Variable 
    if(k>1)
    {
        int k=5; //Local Variable
        cout<<k<<endl; //5
    }
    cout<<k<<endl; //1
}