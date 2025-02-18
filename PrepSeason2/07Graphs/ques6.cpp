// Topological Sort using DFS
#include<bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>> &adj,int u,vector<bool> visited,stack<int> &st){
    visited[u] = true;

    // phele mere u ke baccho ko daalo
    for(int &v : adj[u]){
        if(!visited[u]){
            DFS(adj,v,visited,st);
        }
    }

    // abb mujhe daalo stack me daalo
    st.push(u);
}

vector<int> topSort(int V,vector<vector<int>> adj){
    vector<bool> visited(V,false);
    stack<int> st;

    for(int i=0;i<V;i++){
        if(!visited[i]){
            DFS(adj,i,visited,st);
        }
    }


    vector<int> result;

    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }

    return result;
}


int main(){

}