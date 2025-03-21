// Sort a stack


#include<bits/stdc++.h>
using namespace std;

void Insert(stack<int> &st,int x){
    int n = st.size();
    
    if(n==0 || st.top()<= x){
        st.push(x);
        return;
    }

    int val = st.top();
    st.pop();
    Insert(st,x);
    st.push(val);
    return;
}

void SortStack(stack<int> &st){
    int n = st.size();
    if(n<=1){
        return;
    }
    int x = st.top();
    st.pop();
    SortStack(st);
    Insert(st,x);
}
int main(){
    int n;
    cin>>n;
    stack<int> st;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        st.push(val);
    }
    SortStack(st);
    stack<int> temp;
    while (!st.empty()) {
        temp.push(st.top());
        st.pop();
    }
    
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
}