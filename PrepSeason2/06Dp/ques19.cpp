// Sequence Pattern Matching
#include<bits/stdc++.h>
using namespace std;

bool LCS(string X,string Y,int n,int m){
    int t[n+1][m+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(X[i-1]==Y[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }else{
                t[i][j] = max(t[i][j-1],t[i-1][j]);
            }
        }
    }
    if(t[n][m]==X.size()){
        return true;
    }else{
        return false;
    }
}


int main(){

}