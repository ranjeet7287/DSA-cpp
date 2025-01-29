// 0 - 1 Knapsack Problem
#include<bits/stdc++.h>
using namespace std;

int Knapsack(vector<int> &wt,vector<int> &val,int W,int n){
    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]<=W){
        return max(val[n-1]+Knapsack(wt,val,W-wt[n-1],n-1) , Knapsack(wt,val,W,n-1));
    }
    else{
        return Knapsack(wt,val,W,n-1);   
    }
}

// Dp soln (memoization)
// constrait n<=100 w<=100

int static t[101][101];
memset(t,-1,sizeof(t));
int kanapsack(int *wt,int *val,int W,int n){
    // Base case
    if(n==0 || W==0){
        return 0;
    }

    if(t[n][W]!=-1){
        return t[n][W];
    }
    if(wt[n-1]<=W){
        return t[n][W]=max(val[n-1]+kanapsack(wt,val,W-wt[n-1],n-1),kanapsack(wt,val,W,n-1));
    }else if(wt[n-1]>W){
        return  t[n][W]=kanapsack(wt,val,W,n-1);
    }
}



int static t[10000][10000];
int knapsack(int* wt, int* val, int n, int w) {
        // Intializing
    for(int i=0;i<n+1;i++){
        for(int j=0;j<w+1;j++){
            if(i==0 || j==0){
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<w+1;j++){
            if(wt[i-1]<=j){
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
            }else {
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][w];
}


int main(){}
