#include<bits/stdc++.h>
using namespace std;

void Solve(string input,string output){

    if(input.empty()){
        cout<<output<<" ";
        return;
    }

    string op1 = output;
    string op2 = output;

    op2.push_back(input[0]);
    input.erase(input.begin()+0);

    Solve(input,op1);
    Solve(input,op2);
    return;

}

int main(){}