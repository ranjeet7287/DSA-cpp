//  Peak element 
#include<iostream>
using namespace std;

int PeakElement(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;
        if(mid>0 && mid<size-1){
            if(arr[mid]>arr[next] && arr[mid]>arr[prev]){
                return mid;
            }else if(arr[prev]>arr[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }else if(mid==0){
            if(arr[0]>arr[1]){
                return 0;
            }else{
                return 1;
            }
        }else if(mid==n-1){
            if(arr[size-1]>arr[size-2]){
                return size-1;
            }else{
                return size-2;
            }
        }
    }
}

int main(){

}