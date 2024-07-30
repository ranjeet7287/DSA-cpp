#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
    int k=1;
    while(k<=n-i)
    {
        cout<<" ";
        k++;
    }
    k=1;
    while(k<=(2*i-1))
    {
        cout<<"*";
        k++;
    }
    cout<<endl;
    i++;
}
}