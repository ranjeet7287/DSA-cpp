#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int val=1;
    int i=1;
    while(i<=y){

        val=val*x;
        i=i+1;

    }cout<<val;
}
