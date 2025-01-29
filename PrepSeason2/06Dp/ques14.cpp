// Minimum Number of Insertion and Deletion to convert String a to String b
#include<bits/stdc++.h>
using namespace std;

vector<int> MID(string X,string Y,int n,int m){

    int t[n+1][m+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 || j==0){
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(X[i-1]==Y[j-1]){
                t[i][j] = 1 + t[i-1][j-1]; 
            }else{
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
    }

    int NoDel = X.size() - t[n][m];
    int NoInsert = Y.size() - t[n][m];

    return {NoDel,NoInsert};

}


int main(){}