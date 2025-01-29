#include<bits/stdc++.h>
using namespace std;

int Solve(int e,int f){
    if(f==0||f==1){
        return f;
    }
    if(e==1){
        return f;
    }
    int ans = INT_MAX;
    for(int k=1;k<=f;k++){
        int temp = 1 + max(Solve(e-1,k-1),Solve(e,f-k));
        ans = min(temp,ans);
    }
    return ans;
}

int static t[101][101];
memset(t,-1,sizeof(t));
int Slove2(int e,int f){
    if(f==0 || f==1){
        return f;
    }
    if(e==1){
        return f;
    }
    if(t[e][f]!=-1){
        return t[e][f];
    }
    int ans = INT_MAX;
    for(int k=1;k<=f;k++){
        
        int temp = 1 + max(Solve2(e-1,k-1),Slove2(e,f-k));
        ans = min(ans,temp);
    }
    return t[e][f]=ans;
}
int main(){

}