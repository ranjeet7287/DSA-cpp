#include<bits/stdc++.h>
using namespace std;

vector<int> shortestPath(int n,int m,vector<vector<int>> &edge){

    unordered_map<int,vector<pair<int,int>>> adj;
    for(auto &vec : edge){
        int u = vec[0];
        int v = vec[1];
        int w = vec[2];
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    vector<int> result(n+1,INT_MAX);
    vector<int> parent(n+1);

    for(int i=1;i<=n;i++){
        parent[i] = i;
    }

    result[1]=0;
    pq.push({0,1});

    while(!pq.empty()){
        int distance = pq.top().first;
        int node     = pq.top().second;
        pq.pop();

        for(auto &vec : adj[node]){

            int neig_node = vec.first;
            int adj_dist  = vec.second;


            if(distance + adj_dist < result[neig_node]){
                result[neig_node] =  distance + adj_dist;
                pq.push({distance + adj_dist,neig_node});
                parent[neig_node] = node;  
            }
        }
    }

    int dest_node = n;
    if(result[dest_node]==INT_MAX){
        return {-1};
    }

    vector<int> path;
    while(parent[dest_node]!=dest_node){
        path.push_back(dest_node);
        dest_node = parent[dest_node];
    }
    path.push_back(1);
    reverse(begin(path),end(path));

    return path;


}

int main(){

}