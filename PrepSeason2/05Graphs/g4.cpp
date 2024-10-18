// DFS
#include<bits/stdc++.h>
using namespace std;

void DFS(int node,unordered_map<int,vector<int>> graph,int n ,vector<int> &visited){

    cout<<node<<" ";
    visited[node]=1;

    for(int n:graph[node]){
        if(!visited[n]){
            DFS(n,graph,n,visited);   
        }
    } 

}


int main(){
    vector<vector<int>>edge_list ={
        {0,1},{1,4},{1,2},{2,3}
    };
    int n = edge_list.size();
    unordered_map<int,vector<int>> map;
    map.clear();
    for(int  i = 0; i<n;i++){
        int a = edge_list[i][0] , b = edge_list[i][1];
        map[a].push_back(b);
        map[b].push_back(a);
    }

    vector<int> visited;

    DFS(0,map,n,visited);


}