#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number n :"<<endl;
    cin>>n;
    int d=2;
    bool divide=false;
    while(d<n)
    {
        if(n%d==0)
        {
            cout<<"Not Prime"<<endl;
            divide=true;
            break;
        }
        d=d+1;
    }
    if(!divide)
    {
        cout<<"Prime"<<endl;
    }
}