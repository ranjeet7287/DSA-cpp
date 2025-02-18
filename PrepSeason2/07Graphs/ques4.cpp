// Detect cycle in a undirected graph 
#include<bits/stdc++.h>
using namespace std;


bool isCycleBFS(vector<vector<int>>& adj,int u,vector<bool> visited){
    
    queue<int,int> que;
    que.push({u,-1});

    visited[u] = true;


    while(!que.empty()){
        pair<int,int> v = que.front();
        que.pop();
        int scource = v.first;
        int parent = v.second;


        for(int &v: adj[scource]){
            if(visited[v]==false){
                visited[v] = true;
                que.push({v,scource});
            }else if(v!=parent){
                return true;
            }
        }
    }
    return false;
}

bool isCycle(int V,vector<vector<int>>& adj){
    vector<bool> visited(V,false);
    for(int i=0;i<V;i++){
        if(!visited[i] && isCycleBFS(adj,i,visited)){
            return true;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> adj = {{1}, {0,2,4}, {1,3}, {2,4}, {1,3}};
    cout<< isCycle(adj.size(),adj);
}