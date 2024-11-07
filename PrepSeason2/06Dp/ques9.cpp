#include<bits/stdc++.h>
using namespace std;

int static t[1001][1001];
int LCS(string X,string Y,int n,int m){

    if(n==0||m==0){
        return 0;
    }
    
    if(t[m][n]!=-1){
        return t[m][n];
    }

    if(X[m-1]==Y[n-1]){
        return t[n][m] =  1 + LCS(X,Y,n-1,m-1);   
    }else {
        return t[n][m] = max(LCS(X,Y,n-1,m),LCS(X,Y,n,m-1)); 
    }


}


int main(){
    cin>>X>>Y;
    string X,Y;
    memset(t,-1,sizeof(t));

    return LCS(X,Y,X.size(),Y.size());
}