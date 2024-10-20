// n -> 1
// 1 -> n
#include<bits/stdc++.h>
using namespace std;

void Print(int n){
    // base  -> samller vaild input
    if(n==1){
        cout<<n<<" ";
        return;
    }
    Print(n-1);
    cout<<n<<" ";
}


void Print2(int n){
    // base  -> samller vaild input
    if(n==1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    Print2(n-1);
}

int fact(int n){
    //base case
    if(n==0 || n==1){
        return 1;
    }
    //hypothesis
    int x=fact(n-1);
    //induction step
    int ans=x*n;
    return ans;
}

int main(){
    Print2(7);
}