// Detect cycle in a undirected graph 
#include<bits/stdc++.h>
using namespace std;

bool isCycleDFS(vector<vector<int>>& adj,int u,vector<bool> &visited,int parent){
    visited[u] = true;
    
    for(int &v:adj[u]){
        cout<<v<<endl;
        if(v==parent) continue;

        if(visited[v]){
            return true;
        }

        if(isCycleDFS(adj,v,visited,u)){
            return true;
        }
 
    }
    return false;
}

bool isCycle(int V,vector<vector<int>>& adj){
    vector<bool> visited(V,false);
    for(int i=0;i<V;i++){
        if(!visited[i] && isCycleDFS(adj,i,visited,-1)){
            return true;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> adj = {{1}, {0,2,4}, {1,3}, {2,4}, {1,3}};
    cout<< isCycle(adj.size(),adj);
}