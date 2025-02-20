// 210. Course Schedule II

#include<bits/stdc++.h>
using namespace std;

vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites){

    unordered_map<int,vector<int>> adj;
    vector<int> InDgree(numCourses,0);
    for(vector<int> &vec : prerequisites){
        int u = vec[0];
        int v = vec[1];
        adj[u].push_back(v);
    }


    for(int i=0;i<numCourses;i++){
        for(int &v:adj[i]){
            InDgree[v]++;
        }
    }


    queue<int> qu;
    for(int i=0;i<InDgree.size();i++){
        if(InDgree[i]==0){
            qu.push(i);
        }
    }

    vector<int> result;
    while(!qu.empty()){
        int u = qu.front();
        result.push_back(u);
        qu.pop();

        for(int &v:adj[u]){
            InDgree[v]--;
            if(InDgree[v]==0){
                qu.push(v);
            }
        }
    }

    if(result.size()==numCourses){
        return result;
    }else{
        return {};
    }

}

int main(){

}