#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char x = 'A'+n-i;
        for(int j=0;j<=i;j++){
            char y = x+j-1;
            cout<<y;
        }
        cout<<endl;
    }
}
