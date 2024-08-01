#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans *=i;
    }
    return ans;
}
bool isPrime(int n){
    if(n==1 || n==2){
        return true;
    }
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<factorial(n);
}