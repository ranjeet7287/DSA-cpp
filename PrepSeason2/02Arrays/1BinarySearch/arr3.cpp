#include<bits/stdc++.h>
using namespace std;
// Order Agnostic Search
int BSD(int arr[],int n,int x){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]<x){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
}
int BSA(int arr[],int n,int x){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]>x){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    if(arr[0]>arr[n-1]){
        cout<<BSD(arr,n,x)<<endl;
    }else{
        cout<<BSA(arr,n,x)<<endl;
    }
}