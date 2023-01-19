#include<iostream>
using namespace std;
int main()
{
    int n,rem,ans=0;
    cin>>n;
    int i=1;
    while(n!=0)
    {
        rem=n%10;
        ans=ans+(rem*i);
        i=i*2;
        n=n/10;
    }
    cout<<ans;
}