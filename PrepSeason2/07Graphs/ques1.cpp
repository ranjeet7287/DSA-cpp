// DFS
#include<bits/stdc++.h>
using namespace std;

void DFS(unordered_map<int,vector<int>> &adj,int &u, vector<bool> &visited,vector<int> &result){
    
    if(visited[u]==true){
        return;
    }
    
    visited[u] = true;
    result.push_back(u);
    for(int &v : adj[u]){
        if(!visited[v]){
            DFS(adj,v,visited,result);
        }
    }


}

vector<int> DFS(int V,vector<int> mp[]){

    unordered_map<int,vector<int>> adj;
    for(int u=0;u<V;u++){

        for(auto v =mp[u].begin();v!=mp[u].end();v++){
            adj[u].push_back(*v);
        }

    }

    vector<int> result;
    vector<bool> visited(V,false);

    DFS(adj,0,visited,result);

    return result;


}


int main(){

}

/*
mp[0] = {1, 2}
mp[1] = {2}
mp[2] = {0}

adj[0] = {1, 2}
adj[1] = {2}
adj[2] = {0}

Execution Steps:

Start at node 0 (visited = [F,F,F]).

Mark 0 as visited, add to result: result = [0].

Process neighbors of 0: 1 and 2.

Node 1:

Mark 1 as visited, add to result: result = [0, 1].

Process neighbors of 1: 2.

Node 2:

Mark 2 as visited, add to result: result = [0, 1, 2].

Process neighbors of 2: 0 (already visited).

Node 2 (already visited).

*/