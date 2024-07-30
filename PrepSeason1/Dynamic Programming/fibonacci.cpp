#include<bits/stdc++.h>
using namespace std;

// Memoization --> @ Top Down Approch in which we store our ans for future use
int fibo_help(int n,int *ans)
{
    if(n<=1){
        return n;
    }
    // Check if output already exists
    if(ans[n]!=-1){
        return ans[n];
    }
    int a=fibo_help(n-1,ans);
    int b=fibo_help(n-2,ans);

    // save our ans for future use
    ans[n]=a+b;

    return ans[n];
}

int fibo(int n)
{
    int *ans=new int[n+1];
    for(int i=0;i<=n;i++){
        ans[i]=-1;
    }
    return fibo_help(n,ans);
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
}