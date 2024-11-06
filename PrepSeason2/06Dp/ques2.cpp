// Subset Sum Poblem
#include<bits/stdc++.h>
using namespace std;

bool SubsetSum(vector<int> arr,int sum){
    int n = arr.size();
    int t[n+1][sum+1];

    // intailiztion
    for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<n;j++){
            if(i==0){
                t[i][j]=false;
            }
            if(j==0){
                t[i][j]=true;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
            }else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][sum];
    
}

int main(){}