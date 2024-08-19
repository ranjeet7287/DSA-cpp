/*
    Write a program to generate the reverse of a given number N. 
    Print the corresponding reverse number.
*/
#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cin>>n;
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    cout<<rev;
}