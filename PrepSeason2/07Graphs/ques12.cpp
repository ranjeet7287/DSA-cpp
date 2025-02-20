// 207. Course Schedule I (DFS)
#include<bits/stdc++.h>
using namespace std;

bool isDFS(unordered_map<int,vector<int>> &adj,int u,vector<bool> &visited,vector<bool> &inRecusrion){
    visited[u] = true;
    inRecusrion[u] = true
    for(int &v : adj[u]){
        if(visited[v]==false && isDFS(adj,v,visited,inRecusrion)){
            return true;
        }else if(visited[v]==true && inRecusrion[v]==true){
            return true;
        }
    }

    inRecusrion[u] = false;
    return false;


}

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    
    unordered_map<int,vector<int>> adj;
    for(vector<int> &vec:prerequisites){
        int a = vec[0];
        int b = vec[1];
        adj[b].push_back(a);
    }

    vector<bool> visited(numCourses,false);
    vector<bool> inRecusrion(numCourses,false);

    for(int i=0;i<numCourses;i++){
        if(!visited[i] && isDFS(adj,i,visited,inRecusrion)){
            return false;
        }
    }

    return true;
}

int main(){

}