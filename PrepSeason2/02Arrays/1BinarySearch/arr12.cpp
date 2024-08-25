// Find the index of 1st 1 in Infinte  Binary  Sorted Array
#include<bits/stdc++.h>
using namespace std;

int EndIndex(int arr[],int x){
    int start = 0;
    int end = 1;
    while(x>=arr[end]){
        start=end;
        end = end*2;
    }
    return end;
}

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

int main(){
    
}