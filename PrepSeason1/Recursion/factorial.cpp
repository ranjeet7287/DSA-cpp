#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int small=factorial(n-1);
    return n*small;
}
int main()
{
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
}