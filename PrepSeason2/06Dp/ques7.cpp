// Coin Change 2
#include<bits/stdc++.h>
using namespace std;


int CoinChange1(vector<int> &arr,int sum,int n){
    int t[n+1][sum+1];
    // Intailization
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                t[i][j]=0;
            }
            if(j==0){
                t[i][j]=1;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<j){
                return t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
            }else{
                return t[i][j] = t[i-1][j];
            }
        }
    }

    return t[i][j];


}



int CoinChage2(int *coin,int sum){
    int t[n+1][sum+1];
    for(int i = 0 ;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                t[i][j]=0;
            }
            if(j==0){
                t[i][j]=INT_MAX-1;
            }
        }
    }

    // FOR 2ND Row
    for(int i=1;i<sum+1;i++){
        if(i%coin[0]==0){
            t[i][j]=i/coin[0];
        }else{
            t[i][j]=INT_MAX-1;
        }
    }

    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(coin[i-1]<=j){
                t[i][j]=min(1+t[i][j-coin[i-1]],t[i-1][j]);
            }else{
                t[i][j]=t[i-1][j];
            }
        }
    }

    return t[n][sum];
    
}

int main(){

}