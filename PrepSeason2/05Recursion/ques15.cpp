
#include<bits/stdc++.h>
using namespace std;

void Parentheses(int open,int closed,string output){
    
    if(open == 0 && closed ==0){
        cout<<output<<endl;
        return;
    }

    if(open!=0){
        string op1 = output;
        op1.push_back('(');
        Parentheses(open-1,closed,op1);
    }

    if(closed > open){
        string op2 = output;
        op2.push_back(')');
        Parentheses(open,closed-1,op2);
    }

    return;
}



int main(){
    int n;
    cin>>n;
    string output;
    Parentheses(n,n,output);
}