// Sort a stack
#include<bits/stdc++.h>
using namespace std;
void insetStack(stack<int> &s,int temp){
     if(s.size()==0 || s.top()<=temp){
        s.push(temp);
        return;
    }
    int val=s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
    return;
}
void SortStack(stack<int> &s){
    // Base Case
    if(s.size()<=1){
        return;
    }
    // first element
    int temp=s.top();
    s.pop();
    SortStack(s);
    insetStack(s,temp);
}