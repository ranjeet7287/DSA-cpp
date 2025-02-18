// Detect Cycle in Directed Graph using BFS
#include<bits/stdc++.h>
using namespace std;

bool Top(int V,vector<vector<int>> &adj){
    vector<int> indegre(V,0);

    for(int u=0;u<V;u++){
        for(int &v : adj[u]){
            indegre[v]++;
        }
    }

    queue<int> qu;
    for(int i=0;i<V;i++){
        if(indegre[i]==0){
            qu.push(i);
        }
    }

    int count = 0;
    while(!qu.empty()){
        int u = qu.front();
        qu.pop();
        
        for(int &v : adj[u]){
            indegre[v]--;
            if(indegre[v]==0){
                qu.push(v);
                count++;
            }
        } 
    }
    if(n==count){
        return false;
    }
    return true;
}


int main(){
    
}