#include<bits/stdc++.h>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    int m  = mat.size();
    int n =  mat[0].size();

    map<int,vector<int>> mp;
    vector<int> result;

    // fil the map using i+j  tecq
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mp[i+j].push_back(mat[i][j]);
        }
    }

    // alternatively we will filp
    bool filp = true; 
    for(auto &it : mp){
        if(filp){
            // it.second reverse
            reverse(it.second.begin(),it.second.end());
        }
        for(int &num : it.second){
            result.push_back(num);
        }
    }
    return result;
}
    
    

