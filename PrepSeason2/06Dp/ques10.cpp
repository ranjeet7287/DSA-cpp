#include<bits/stdc++.h>
using namespace std;

// top - down

int LCS(string X,string Y,int n,int m){
    int t[n+1][m+1];

    // Intialization
    for(int i=0;i<n+1;i++){
        for(int j=0;m+1;j++){
            if(i==0){
                t[i][j]=0;
            }
            if(j==0){
                t[i][j]=0;
            }
        }
    }

    // recursive call ko reaplace karana hai - > martrix se
    // m -> i , n -> j
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(X[i-1]==Y[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }else{
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
    }

    return t[n][m];


}

int main(){}