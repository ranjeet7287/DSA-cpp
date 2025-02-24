// Detect Cycle using DSU 

#include<bits/stdc++.h>
using namespace std;

int find(int x,vector<int> &parent){
    if(x == parent[x]){
        return x;
    }
    return parent[x] = find(parent[x],parent);
}

void Union(int x,int y,vector<int> &parent,vector<int> &rank){
    int parent_x = find(x,parent);
    int parent_y = find(y,parent);

    if(parent_x == parent_y){
        return;
    }

    if(rank[parent_x] > rank[parent_y]){
        parent[parent_y] = parent_x;

    }else if(rank[parent_x] < rank[parent_y]){
        parent[parent_y] = parent_x;

    }else{
        parent[parent_x] = parent_y;
        rank[parent_y]++;
    }

}


bool isCycle(int V,vector<vector<int>> &adj){

    vector<int> rank(V,0);
    vector<int> parent(V,0);

    for(int i=0;i<V;i++){
        parent[i] = i;
        rank[i] = 1;
    }

    for(int u=0;u<V;u++){
        for(int &v : adj[u]){
            if(u<v){
                int parent_v = find(v);
                int parent_u = find(u);
                if(parent_v == parent_u){
                    return true;
                }
                Union(parent_v,parent_u,parent,rank);
            }
        }
    }

    return false;

}


int main(){

}