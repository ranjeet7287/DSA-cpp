#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<n-(i+1);k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<i+j+1;
        }
        for(int y=i;y>0;y--){
            cout<<2*i-y+1;
        }
        cout<<endl;
    }
}