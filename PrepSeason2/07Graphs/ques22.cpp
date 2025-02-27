// Dijkstra's Algorithm --  using priortiy queue
#include<bits/stdc++.h>
using namespace std;

vector<int> Dijkstra(int V,vector<vector<int>> adj, int source){

    // priority_queue<int,vector<int>> pq; -> max heap
    // priority_queue<int,vector<int>,greater<int>> pq; -> min heap
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    vector<int> result(V,INT_MAX);
    result[source] = 0;
    pq.push({0,source});

    while(!pq.empty()){
        int distance = pq.top().first;
        int node     = pq.top().second;
        pq.pop();

        for(auto &vec : adj[node]){
            int adj_node = vec[0];
            int adj_dis  = vec[1];


            if(distance + adj_dis < result[adj_node]){
                result[adj_node] = distance + adj_dis;
                pq.push({distance + adj_dis,adj_node});
            }
        }
    }

    return result;
    

}


int main(){

}