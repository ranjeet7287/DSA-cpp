// Minimum Subset Sum Diff
#include<bits/stdc++.h>
using namespace std;


int SubSet(int arr[],int n ,int sum){
    int t[n+1][sum+1];

    for(int i = 0 ; i<n+1 ; i++){
        for(int j = 0 ; j<sum+1 ;j++){
            if(i==0){
                t[i][j]=0;
            }
            if(j==0){
                t[i][j]=1;
            }
        }
    }


    for(int  i = 1 ; i < n+1 ; i++){
        for(int j = 1 ; j < sum+1 ;j++){
            if(arr[i-1] < = j){
                t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j]; 
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    int ans  = INT_MAX;
    for(int i = 0 ; j < sum+1; j++){
        // n - > last row
        if(t[n][j]==1){
            ans = min(ans,abs(sum - 2*j));
        }
    }
    return ans;
}

int minDiff(int *arr,int n){
    // Range - >  total sum of an array
    int sum = 0;
    for(int i = 0; i< n+1;i++){
        sum+=arr[i];
    }

    return SubSet(arr,n,sum);
}