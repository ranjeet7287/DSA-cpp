// Print shortest common Supersequence

#include<bits/stdc++.h>
using namespace std;

string PSCS(string X,sting Y,int n,int m){
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
                t[i][j] = max(t[i][j-1],t[i-1][i]);
            }
        }
    }



    int i = n;
    int j = m;
    string s = '';
    while(i>0 && j>0){
        if(X[i-1]==Y[j-1]){
            s.push_back(X[i-1]);
            i--;
            j--;
        }else {
            if(t[i][j-1] > t[i-1][j]){
                s.push_back(Y[j-1]);
                j--;
            }else if(t[i-1][j] > t[i][j-1]){
                s.push_back(X[i-1]);
                i--;
            }
        }

    }

    while(i>0){
        s.push_back(X[i-1]);
        i--;
    }

    while(j>0){
        s.push_back(Y[j-1]);
        j--;
    }

    return reverse(s.begin(),s.end());

}



int main(){

}