/*
Nth Fibonaaci Number
Explanation: The number is ‘6’ so we have to find the “6th” Fibonacci number.
So by using the given formula of the Fibonacci series, we get the series:    
[ 1, 1, 2, 3, 5, 8, 13, 21]
So the “6th” element is “8” hence we get the output.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=1,sum=0;
    for(int i=0;i<n;i++){
        sum = a+b;
        a = b;
        b = sum; 
    }
    cout<<a;
}