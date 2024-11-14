// Scrambled String Recursive
#include<bits/stdc++.h>
using namespace std;


bool Solve(string a,string b){

    // Base condtion 
    if(a.size()!=b.size()){
        return false;
    }
    if(a.empty() && b.empty()){
        return true;
    }
    if(a.compare(b)==0){
        return true;
    }

    if(a.length()<=1 || b.length()<=1){
        return false;
    }

    bool isFlag = false;
    int n = a.size();


    for(int i = 0;i<=n-1;i++){
        // if swap condtion 
        bool swap=Solve(a.substr(0,i),b.substr(n-i,i))==true && Solve(a.substr(i,n-i),b.substr(0,n-i))==true;
        // if no swap condtion 
        bool noswap =Solve(a.substr(0,i),b.substr(0,i))==true &&Solve(a.substr(n-i,i),b.substr(n-i,i))==true;
        if(swap || noswap){
            isFlag = true;
            break;
        }
    }
    return isFlag;

}


int main(){

}