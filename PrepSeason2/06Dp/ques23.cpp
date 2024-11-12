// Palindrome Partitioning Recursive --> top down 
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
        int temp = Solve(s,i,k) + Slove(s,k+i,j) + 1;
        ans = min(ans,temp);
    }

    return t[i][j] = ans;

}



int main(){

}


