// Count of Subsets Sum with a Given Sum
#include<bits/stdc++.h>
using namespace std;

int Count(int arr[],int n ,int sum){
    int n = arr.size();
    int t[n+1][sum+1];

    if(n==0 || sum==0){
        return 0;
    }

    // intialize
    for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<n;j++){
            if(i==0 || j==0){
                t[i][j]=0;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum;j++){
            if(arr[i-1]<=j){
                t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    return t[n][sum];
    

}


int main(){

}