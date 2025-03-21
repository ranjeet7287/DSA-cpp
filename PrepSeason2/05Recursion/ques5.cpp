// Delete middle element from stack

#include<bits/stdc++.h>
using namespace std;

void Delete(stack<int> &st,int k){
    if(k==1){
        st.pop();
        return;
    }
    int val = st.top();
    st.pop();
    Delete(st,k-1);
    st.push(val);
    return;
}


int main(){
    int n;
    cin >> n;
    stack<int> st;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        st.push(val);
    }
    int k = (st.size()+1)/2;
    if(!st.empty()){   
        Delete(st,k);
    }
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