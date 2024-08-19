#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char x = 'A'+(n-(i+1));
        for(int j=0;j<=i;j++){
            cout<<char(x+j);
        }
        cout<<endl;
    }
}