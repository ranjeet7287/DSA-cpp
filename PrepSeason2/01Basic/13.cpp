#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    int val=i;
    while(val<=n){
        int j = 1;
        while(j<=i){
            cout<<val;
            j++;
            val++;
        }
        cout<<endl;
        i++;
    }
}