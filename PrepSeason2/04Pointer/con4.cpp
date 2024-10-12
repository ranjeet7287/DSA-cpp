#include<bits/stdc++.h>
using namespace std;

void print(int *p){
    (*p)++;
}


int main(){
    int i = 10;
    int *p = &i;
    cout<<*p<<endl;
    print(p);
    cout<<*p<<endl;
}