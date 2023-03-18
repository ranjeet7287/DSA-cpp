#include<bits/stdc++.h>
using namespace std;
int matrix_help(int *arr,int start,int end,int dp[][105])
{
    //WE have only one element only
    if(start==end){
        return dp[start][end]=0;
    }else if(start==end-1)
    {
        return dp[start][end]=0;
    }
    if(dp[start][end]!=-1){
        return dp[start][end];
    }
    int ans=INT_MAX;
    for(int k=start+1;k<=end-1;k++){
        ans=min(ans,matrix_help(arr,start,k,dp) + matrix_help(arr,k,end,dp)+arr[start]*arr[end]*arr[k]);
    }
    return dp[start][end]=ans;
}
int matrixChainMultiplication(int* arr, int n) 
{

    int dp[105][105];
    for(int i=0;i<105;i++){
        for(int j=0;j<105;j++){
            dp[i][j]=-1;
        }
    }
    return matrix_help(arr,0,n,dp);
}
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
    }
    cout << matrixChainMultiplication(arr, n);
    delete[] arr;
}