// Evaluate Expression To True Boolean Parenthesization
#include<bits/stdc++.h>
using namespace std;

int Solve(string s,int i,int j,bool isTrue){

    if(i>j){
        return true;
    }else if(i==j){
        if(isTrue==true){
            return s[i]=='T';
        }else{
            return s[j]=='F';
        }
    }

    int ans = 0;
    for(int k = i+1;k<=j-1;k=k+2){
        int lt = Solve(s,i,k-1,true);
        int lf = Solve(s,i,k-1,false);
        int rt = Solve(s,k+1,j,true);
        int rf = Solve(s,k+1,j,false);

        if(s[k]=='&'){
            if(isTrue==true){
                ans = ans + lt * rt;
            }else{
                ans = ans + (lt*rf) + (lf*rt) + (lf*rf);
            }
        }else if(s[k]=='|'){
            if(isTrue==true){
                ans = ans + (lt*rf) + (lf*rt) + (rt*rf);
            }else{
                ans = ans + (lf*rf);
            }

        }else if(s[k]=='^'){
            if(isTrue==true){
                ans = ans + (lt*rf) + (rf*lt);
            }else{
                ans = ans + (lf*rt) + (rf*lf);
            }
        }
    }

    return ans;




}

int main(){

}