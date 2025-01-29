#include<bits/stdc++.h>
using namespace std;

void Solve(string ip,string op,vector<string> &v){
    // Base cond
    if(ip.size()==0){
        v.push_back(ip);
        return;
    }
    unordered_set<char> map;
    for(int i=0;i<ip.size();i++){
        // control recusrion
        if(map.find(ip[i])==map.end()){
            map.insert(ip[i]);
            string newIp = ip.substr(0,i) + ip.substr(i+1);
            string newOp = op + ip[i];
            Solve(ip,op,v);
        }
    }
}

int main(string ip){
    vector<string> v;
    string op='';
    Solve(ip,op,v);
    return v;
}