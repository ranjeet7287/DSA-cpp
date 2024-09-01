#include<bits/stdc++.h>
using namespace std;

bool isValid(int arr[],int n,int k,int max){
    int stu=1;
    int sum=0;
    for(int i =0;i<n;i++){
        sum+=arr[i];
        if(sum>max){
            stu++;
            sum=arr[i];
        }
        if(stu>k){
            return false;
        }else{
            return true;
        }
    }
   
}

int MinimumNoOfPage(int arr[],int n,int k){
    // if no. of books are less than student
    if(k>n){
        return -1;
    }
    // max element is start 
    int start = *max_element(arr,arr+n);
    // max sum of all element
    int end;
    for(int i=0;i<n;i++){
        end+=arr[i];
    }
    int res=-1;
    while(start<=end){
        int mid = start+(enn-start)/2;
        if(isValid(arr,n,k,mid)==true){
            res = mid;
            end = mid-1;
        }else{
            start = mid+1;
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
    int k;
    cin>>k;
    int ans = MinimumNoOfPage(arr,n,k);
    cout<<ans;
}