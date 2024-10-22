#include<bits/stdc++.h>
using namespace std;

void Solve(stack<int> &stack,int k){
    if(k==1){
        stack.pop();
        return;
    }
    int temp = stack.top();
    stack.pop();
    Solve(stack,k-1);  
    stack.push(temp);
    return;
}

stack<int> Delete(stack<int> &stack){

    int n = stack.size();
    if(stack.empty()){
        return stack;
    }
    int k = (n/2)+1;
    Solve(stack,n);
    return stack;
}


int main(){}