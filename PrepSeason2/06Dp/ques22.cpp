// Palindrome Partitioning Recursive

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int i = 0;
    int j = s.size()-1;
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}

int Solve(string s,int i,int j){

    // Base
    if(i>=j){
        return 0;
    }
    if(isPalindrome(s)==true){
        return 0;
    }
    int ans = INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp = Solve(s,i,k) + Solve(s,k+1,j) + 1;
        ans = min(temp,ans); 
    }

    return ans;

}


int static t[1001][1001];
memset(t,-1,sizeof(t));
bool isPlaindrome(string arr,int i,int j){
    while(i<=j){
        if(arr[i]!=arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int Solve(string arr,int i,int j){
    if(i>=j){
        return 0;
    }
    if(isPlaindrome(arr,i,j)==true){
        return 0;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }
    int ans = INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp = Solve(arr,i,k) + Solve(arr,k+1,j) + 1;
        ans = min(ans,temp);
    }
    return t[i][j]=ans;
}



int main(){}