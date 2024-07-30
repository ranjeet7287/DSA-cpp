#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char v='A'+i-1;
        while(j<=i){
            cout<<v;
            j++;
            
        }
        cout<<endl;
        i++;
    }
}
