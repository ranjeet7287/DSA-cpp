// Topological Sort using BFS // khan's algo
#include<bits/stdc++.h>
using namespace std;

vector<int> topSort(int V,vector<vector<int>> &adj){

    // 1.Fill indgree
    vector<int> indgree(V,0);
    for(int u=0;i<V;u++){
        for(int &v:adj[u]){
            indgree[v]++;
        }
    }

    //2.fill queue,with 0
    queue<int> qu;
    for(int i=0;i<indgree.size();i++){
        if(indgree[i]==0){
            qu.push(i);
        }
    }

    // 3. Simple BFS
    vector<int> result;
    while(!qu.empty()){
        int u = qu.front();
        result.push_back(u);
        qu.pop();

        for(int &v:adj[u]){
            indgree[v]--;

            if(indgree[v]==0){
                qu.push(v);
            }
        }
    }
    return result;
}


int main(){

}