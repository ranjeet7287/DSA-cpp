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

int main(){

}