// Find floor of element in a sorted array
#include<bits/stdc++.h>
using namespace std;

int FloorElement(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    int res = INT_MIN;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==x){
            res = arr[mid];
        }
        else if(arr[mid]<x){
            res = arr[mid];
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return res;
}

int CeilElement(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    int res = INT_MAX;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==x){
            res = arr[mid];
        }
        else if(arr[mid]<x){
            start = mid+1;
        }else{
            res = arr[mid];
            end = mid-1;
        }
    }
    return res;
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

}