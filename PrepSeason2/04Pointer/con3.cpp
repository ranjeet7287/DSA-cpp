#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 10;
    int *p = &i;
    int *q = p;

    (*q)++;

    cout<<i<<endl; // 11 

}