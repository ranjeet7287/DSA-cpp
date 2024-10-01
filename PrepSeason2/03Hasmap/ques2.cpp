// 1207. Unique Number of Occurrences
#include<bits/stdc++.h>
using namespace std;


bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int,int> map;
    map.clear();
    for(int i=0;i<arr.size();i++){
        map[arr[i]]++;
    }
    unordered_set<int> st;

    for(auto it:map){
        int freq=it.second;
        if(st.find(freq)!=st.end()){
            return false;
        }
        st.insert(freq);
    }
    return true;

}


int main(){

}