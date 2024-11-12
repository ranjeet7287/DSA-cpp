// Palindrome Partitioning Recursive --> top down  
// More Optimization
#include<bits/stdc++.h>
using namespace std;

int t[1001][1001];
memset(t,-1,sizeof(t));
int Slove(stirng s,int i,int j){
    // base condtion
    if(i>=j){
        return 0;
    }

    if(isPalindrome(s)){
        return 0;
    }

    if(t[i][j]!=-1){
        return t[i][j];
    }
    int ans = INT_MAX;
    for(int k = i;k<=j-1;k++){
        int left;
        if(t[i][k]!=-1){
            left = t[i][k];
        }else {
            left = Slove(s,i,k);
            t[i][k] = left;
        }
        int right;
        if(t[k+1][j]!=-1){
            right = t[k+1][j];
        }else{
            right = Slove(s,k+1,j);
            t[k+1][j] = right;
        }
        int temp =left+right+ 1;
        ans = min(ans,temp);
    }

    return t[i][j] = ans;

}



int main(){

}


