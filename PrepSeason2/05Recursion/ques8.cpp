#include<bits/stdc++.h>
using namespace std;

void Solve(int source,int des,int help,int n){
    if(n==1){
        des = source;
        return; 
    }
    Solve(source,help,des,n-1);
    Solve(help,des,source,n-1);
 
}

int main(){

}