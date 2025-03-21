#include<bits/stdc++.h>
using namespace std;

// 1
bool canFinsh(int numCourse,vector<vector<int>>& pre){
    // graph bano
    unordered_map<int,vector<int>> adj;
    for(vector<int> &vec : pre){
        int u = vec[0];
        int v = vec[1];
        adj[u].push_back(v);
    }
}




// 2
void DFS(int u,vector<bool> &visited,unordered_map<int,vector<int>> &adj){

    if(visited[u]==true){
        return;
    }
    visited[u] = true;
    for(int &v : adj[u]){
        if(!visited[v]){
            DFS(v,visited,adj);
        }
    }
}

int main(){
}