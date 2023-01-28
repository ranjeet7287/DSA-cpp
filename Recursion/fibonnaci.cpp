#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int s1=fib(n-1);
    int s2=fib(n-2);
    return s1+s2;
}
int main()
{
    int n;
    cin>>n;
    int ans=fib(n);
    cout<<ans<<endl;
}