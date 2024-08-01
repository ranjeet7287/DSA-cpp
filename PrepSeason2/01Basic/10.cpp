#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool isPrime = true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isPrime=false;
        }
    }
    if(!isPrime){
        cout<<"Not Prime"<<endl;
    }else{
        cout<<"Prime"<<endl;
    }
}