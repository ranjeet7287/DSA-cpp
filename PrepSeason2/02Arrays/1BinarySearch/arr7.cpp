#include<bits/stdc++.h>
using namespace std;

int BS(int arr[],int x,int start,int end ){
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
    return -1;
}

int RotatedArray(int arr[n],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        int next_elem=(mid+1)%n;
        int prev_elem=(mid+n-1)%n;
        if(arr[mid]<arr[prev_elem] && arr[mid]<arr[next_elem]){
            return mid;
        }else if(arr[start]<=arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
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
    int min_index=RotatedArray(arr,n);
    int First=BS(arr,x,0,min_index-1);
    int Sec=BS(arr,x,min_index,n-1);
    if(First!=-1){
        cout<<First<<endl;
    }else{
        cout<<Sec<<endl;
    }
}