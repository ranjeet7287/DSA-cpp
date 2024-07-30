#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int i=1;
    while(i<=N){
        int j=1;
        char start='A'+i-1;
        while(j<=i){
            char var =start+j-1;
            cout<<var;
            j++;
        }
        cout<<endl;
        i++;
    }
}
