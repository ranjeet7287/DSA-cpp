// BFS
#include<bits/stdc++.h>
using namespace std;

void BFS(unordered_map<int,vector<int>> &adj,int &u,vector<bool> &visited,vector<int> &result){

    if(visited[u]==true){
        return;
    }
    queue<int> que;
    que.push(u);
    visited[u] = true;
    result.push_back(u);

    while(!que.empty()){
        int u = que.front();
        que.pop();
        for(int &v:adj[u]){
            if(!visited[v]){
                que.push(v);
                visited[v] = true;
                result.push_back(v);
            }
        }
    }


}
vector<int> BFS(int V,vector<int> mp[]){

    unordered_map<int,vector<int>> adj;
    for(int u=0;u<V;u++){

        for(auto v =mp[u].begin();v!=mp[u].end();v++){
            adj[u].push_back(*v);
        }

    }

    vector<int> result;
    vector<bool> visited(V,false);

    BFS(adj,0,visited,result);

    return result;


}


int main(){

}
