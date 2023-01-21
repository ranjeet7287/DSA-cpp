#include<iostream>
using  namespace std;
int BinarySearch(int *arr,int n,int x)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+end/2;
        if(x==arr[mid])
        {
            return mid;
        }else if(x<arr[mid])
        {
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
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
    cout<<BinarySearch(arr,n,x);
    delete[]arr;
    
}