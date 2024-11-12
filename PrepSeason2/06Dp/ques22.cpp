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

int main(){}