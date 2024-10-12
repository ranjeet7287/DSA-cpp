// 49. Group Anagrams

#include<bits/stdc++.h>
using namespace std;

//  
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    int n = strs.size();
    unordered_map<string,vector<string>> map;
    vector<vector<string>> result;

    for(int i=0 ; i<n ; i++){
        string temp = strs[i];
        sort(begin(temp),end(temp)); // 0(n)
        map[temp].push_back(strs[i]);  
    }

    for(auto it : map){
        result.push_back(it.second); // 0(n)
    } 

    return result;

}


int main(){

}