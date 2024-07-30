/*
E
DE
CDE
BCDE
ABCDE 
*/
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int i=1;
    while(i<=N){
        int j=1;
        char v='A'+N-i;
        
        while(j<=i){
            //char h=v+j-1;
            cout<<v;
            j++;
            v++;


        }
        cout<<endl;
        i++;
    }

}