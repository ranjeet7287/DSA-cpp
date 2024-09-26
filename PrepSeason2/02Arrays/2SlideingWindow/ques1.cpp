// Maximum Sum SubArray of size k
#include<bits/stdc++.h>
using namespace std;

int MaxSumSubArray(int arr[],int n,int k){
    int start=0,end=0,sum=0;
    int maxsum=INT_MIN;
    while(end<n){
        sum+=arr[end];
        if(end-start+1<k){
            end++;
        }else if(end-start+1==k){
            sum=max(maxsum,sum);
            sum=sum-arr[start];
            start++;
            end++;
        }
    }
    return maxsum;
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
    int ans = MaxSumSubArray(arr,n,k);
    cout<<ans;
}