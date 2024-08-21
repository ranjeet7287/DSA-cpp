// 1st and Last Occurance of an element in sorted array
#include<bits/stdc++.h>
using namespace std;
int firstOccurance(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    int result=-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(x==arr[mid]){
            result=mid;
            end=mid-1;
        }else if (x > arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return result;
}

int LastOccurance(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    int result=-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(x==arr[mid]){
            result=mid;
            start=mid+1;
        }else if (x > arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return result;
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
    cout<<LastOccurance(arr,n,x)<<endl;
}