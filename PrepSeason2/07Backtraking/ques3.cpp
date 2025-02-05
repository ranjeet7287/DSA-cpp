//  N Digit numbers with digits in increasing order

#include<bits/stdc++.h>
using namespace std;

void solve(int idx,string &str,int k,vector<int> &res){
    if(str.size()==k){
        res.push_back(stoi(str));
        return ;
    }
    for(int j=idx+1;j<=9;j++){
        str.push_back(char(j+'0'));
        solve(j,str,k,res);
        str.pop_back();
    }        
}
vector<int> increasingNumbers(int N){
    string str="";
    int k=N;
    vector<int> res;
    if(N==1){
        for(int i=0;i<=9;i++) res.push_back(i);
        return res;
    }
    else{
        solve(0,str,k,res);
        return res;
    }
    
}

int main(){

}


void solve(int &num, int remainingDigits, vector<int> &ans){
    if(remainingDigits == 0){
        ans.push_back(num);
        return;
    }
    int largestDigit = num%10; 
    //largest digit is the last digit
    num *= 10;
    for(int i=largestDigit+1; i<=9; i++){
        num += i;
        solve(num, remainingDigits-1, ans);
        num -= i;
    }
    num /= 10;
}
vector<int> increasingNumbers(int n) {
    vector<int> ans;
    int num = 0;
    if(n==1)    ans.push_back(0);
    solve(num, n, ans);
    return ans;
    
}