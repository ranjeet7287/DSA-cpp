#include<bits/stdc++.h>
using namespace std;

int NearlySearch(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid-1]==x && mid>=start){
            return mid-1;
        }else if(arr[mid+1]==x && mid<=end){
            return mid-1;
        }else if(arr[mid-1]>x){
            end=mid-2;
        }else{
            start=mid+2;
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




}