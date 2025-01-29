// Subset Sum Poblem
#include<bits/stdc++.h>
using namespace std;

// Recursive Soln
bool Subset(vector<int> &arr,int sum,int n){
    if(n==0){
        return false;
    }
    if(sum==0){
        return true;
    }
    if(arr[n-1]<=sum){
        return Subset(arr,sum-arr[n-1],n-1) || Subset(arr,sum,n-1);
    }else{
        return Subset(arr,sum,n-1);
    }
}

// Memoization Soln
int static t[101][101];
memset(t,-1,sizeof(t));

bool Subset(vector<int> &arr,int Sum,int n){

    if(n==0){return false;}
    if(Sum==0){return true;}

    if(t[n][Sum]!=-1){
        return t[n][Sum];
    }


    if(arr[n-1]<Sum){
        return t[n][Sum] = Subset(arr,Sum-arr[n-1],n-1) || Subset(arr,Sum,n-1);
    }else{
        return t[n][Sum] = Subset(arr,Sum,n-1);
    }


}


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