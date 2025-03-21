
// Reverse a stack 
#include<bits/stdc++.h>
using namespace std;

void Insert(stack<int> &st,int x){
    int n = st.size();
    if(st.empty()){
        st.push(x);
        return;
    }
    int val =st.top();
    st.pop();
    Insert(st,x);
    st.push(val);
}

void Reverse(stack<int> &st){
    int n = st.size();
    if(n<=0){
        return;
    }
    int x = st.top();
    st.pop();
    Reverse(st);
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
    Reverse(st);
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
