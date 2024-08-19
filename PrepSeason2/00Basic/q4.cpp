/*
    Given a binary number as an integer N, convert it into decimal and print.
*/
#include<iostream>
using namespace std;
int main(){
    int n,i=1,ans=0;
    cin>>n;
    while(n!=0){
        int last =n%10;
        ans = ans+last*i;
        i=i*2;
        n=n/10;
    }
    cout<<ans;
}