#include<iostream>
using namespace std;

int firstindex(int *arr,int n,int x)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[0]==x)
    {
        return 0;
    }
    int small=firstindex(arr+1,n-1,x);
    cout<<small<<endl;
    if(small==-1)
    {
        return -1;
    }else{
        return small+1;
    }
}

int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int ans=firstindex(arr,n,x);
    cout<<ans<<endl;
    delete[]arr;
}