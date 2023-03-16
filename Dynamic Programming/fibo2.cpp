#include<bits/stdc++.h>
using namespace std;
// DP --> Bpottom-Up Approch
int fibo(int n)
{
    int *ans=new int[n+1];
    // smallest problem
    ans[0]=0;
    ans[1]=1;
    for(int i=2;i<=n;i++){
        ans[i]=ans[i-1]+ans[i-2];
    }
    return ans[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
}