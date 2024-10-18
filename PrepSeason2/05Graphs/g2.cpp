#include<bits/stdc++.h>
using namespace std;

void prin_graph(unordered_map<int,vector<int>> map){
    for(auto &it:map){
        cout<<"Node"<<it.first<<" Connected to ";
        for(int node:it.second){
            cout<<node<<" ";
        }
        cout<<endl;
    }
}

int main(){


    vector<vector<int>> Edgelist = {
        {1,2},{2,3},{3,4},{4,2},{1,3}
    };
    int n = Edgelist.size();
    unordered_map<int,vector<int>> map;
    for(int i = 0 ;i<n;i++){
        int a  = Edgelist[i][0] , b = Edgelist[i][1];
        map[a].push_back(b);
        map[b].push_back(a); 
    }

    prin_graph(map);


}
