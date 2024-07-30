#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100]; //Here Constrait is 10^6 so you can use 1000000 element of size
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
}