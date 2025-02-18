// Detect cycle in a directed graph 
#include<bits/stdc++.h>
using namespace std;

bool isCyclicDFS(vector<vector<int>> &adj,int u, vector<bool> Visited,vector<bool> inResursion){
    
    Visited[u] = true;
    inResursion[u] = true;

    for(int &v:adj[u]){
        // if not visited
        // check cycle in DFS

        if(Visited[v] == false && isCyclicDFS(adj,v,Visited,inResursion)){
            return true;
        }else if(Visited[v] == true && inResursion[v] == true ){
            return true;
        }

    }

    inResursion[u] = false;
    return false;


}


bool isCyclic(int V,vector<vector<int>> &adj){
    
    vector<bool> Visited(V,false);
    vector<bool> inResursion(V,false);


    for(int i=0;i<V;i++){
        if(!Visited[i] && isCyclicDFS(adj,i,Visited,inResursion)){
            return true;
        }
    }

    return false;

}

int main(){

}
