// Reverse a stack 

#include<bits/stdc++.h>
using namespace std;

void Insert(stack<int> &stack,int temp){
    if(stack.size()==0){
        stack.push(temp);
        return;
    }
    int temp = stack.top();
    stack.pop();
    Insert(stack,temp);
    stack.push(temp);
}


void Solve(stack<int> &stack){
    int n = stack.size();
    if(n<=1){
        return;
    }
    int temp = stack.top();
    stack.pop();
    Solve(stack);
    Insert(stack,temp);
}


int main(){}