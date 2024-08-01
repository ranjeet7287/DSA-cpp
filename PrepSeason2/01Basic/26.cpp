#include<bits/stdc++.h>
using namespace std;
int main(){
    int decimal,binary=0,reminder,product=1;
    cin>>decimal;
    while(decimal!=0){
        remainder=decimal%2;
        binary=binary+(remainder*product);
        decimal=decimal/2;
        product*=10;
    }
}