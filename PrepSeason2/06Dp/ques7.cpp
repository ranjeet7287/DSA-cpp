// Coin Change 2
#include<bits/stdc++.h>
using namespace std;

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
    for(int i=1;i<n+1;i++){
        for(int j =1;j<=sum+1;j++){
            if(j%coin[0]==0){
                t[i][j]=j/coin[0];
            }else{
                t[i][j]=INT_MAX-1;
            }
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