// 547. Number of Provinces
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        void DFS(unordered_map<int,vector<int>>&isConnected,int u,vector<bool> &visited){
            visited[u] = true;
            for(int &v : isConnected[u]){
                if(!visited[v]){
                    DFS(isConnected,v,visited);   
                }
            }
        }
        void BFS(unordered_map<int,vector<int>>&isConnected,int u,vector<bool> &visited){
            visited[u] = true;
            queue<int> qu;
            qu.push(u);
    
            while(!qu.empty()){
                int u = qu.front();
                qu.pop();
                for(int &v:isConnected[u]){
                    if(!visited[v]){
                        qu.push(v);
                        visited[v]=true;
                    }
                }
            }
    
        }
        int findCircleNum(vector<vector<int>>& isConnected) {
            int V = isConnected.size();
            vector<bool> visited(V,false);
            unordered_map<int,vector<int>> adj;
            for(int i=0;i<V;i++){
                for(int j=0;j<V;j++){
                    if(isConnected[i][j]==1){
                        adj[i].push_back(j);
                        adj[j].push_back(i);
                    }
                }
            }
            int count = 0;
            for(int u=0;u<V;u++){
                if(!visited[u]){
                    DFS(adj,u,visited);
                    count ++;
                }
            }
            return count;
        }
    };