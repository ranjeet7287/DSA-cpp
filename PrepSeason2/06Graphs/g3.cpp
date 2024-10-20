//  BFS  
#include<bits/stdc++.h>
using namespace std;

void BFS(int source,unordered_map<int,vector<int>> graph,int n){
    queue<int> q;
    vector<int> visited(n);

    q.push(source);
    visited[source]=1;

    while(!q.empty()){
        int f = q.front();
        q.pop();
        cout<<f<<" ";
        for(int n:graph[f]){
            if(!visited[n]){
                visited[n]=1;
                q.push(n);
            }
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

    BFS(0,map,n);

}