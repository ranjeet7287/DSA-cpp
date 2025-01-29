// Evaluate Expression To True-Boolean Parenthesization Recursion
// Given a boolean expression with following symbols.
// Symbols
//     'T' --- true 
//     'F' --- false 
// And following operators filled between symbols
// Operators
//     &   ---boolean AND
//     |   --- boolean OR
//     ^   --- boolean XOR 
// Count the number of ways we can parenthesize the expression so that the value of expression evaluates to true.
// Example:
// Input: symbol[]    = {T, F, T}
//        operator[]  = {^, &}
// Output: 2
// The given expression is "T ^ F & T", it evaluates true
// in two ways "((T ^ F) & T)" and "(T ^ (F & T))"

// Evaluate Expression To True Boolean Parenthesization
#include<bits/stdc++.h>
using namespace std;

unordered_map<string,int> mp;

int Solve(string s,int i,int j,bool isTrue){
    mp.clear();

    if(i>j){
        return true;
    }else if(i==j){
        if(isTrue==true){
            return s[i]=='T';
        }else{
            return s[j]=='F';
        }
    }


    string temp = to_string(i);
    temp.push_back(' ');
    temp.append(to_string(j));
    temp.push_back(' ');
    temp.append(to_string(isTrue));

    if(mp.find(temp)!=mp.end()){
        return mp(temp);
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

    return  mp[temp]=ans;




}

int main(){

}