// BIPARTIE GRAPH USING DFS
#include<bits/stdc++.h>
using namespace std;

bool DFS(unordered_map<int,vector<int>> &adj,int u,vector<int> &color,int curr_color){
    color[u] = curr_color; // CURRENT  NODE KO COLOR NODE KO

    // ABB JAATE HAI ADJANCENT NODES PAR
    for(int &v : adj[u]){

        if(color[v] == color[u]){
            return false;
        }

        // NEVER COLORED (NEVER VISITED)
        if(color[v]==-1){
            // if (color[v]==1) { 0 } else (color[v]==1) {0} 
            // smart statement
            int colorV = 1 - curr_color;
            if(DFS(adj,v,color,colorV)==false){
                return false;
            }
        }
    }

    return true;

}

bool isBipartite(int V,vector<vector<int>>mat){
    bool ans;
    unordered_map<int,vector<int>> adj;
    for(vector<int> &vec : mat){
        int a = vec[0];
        int b = vec[1];
        adj[b].push_back(a);
    }

    // RED  - > 1
    // GREEN  - > 0

    vector<int> color(V,-1);
    for(int u=0;u<V;u++){
        if(color[u]==-1){
            ans = DFS(adj,u,color,1);
        }
    }
    return ans;
}


int main(){

}