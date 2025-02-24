// DSU -> Paths Compression & Rank

#include<bits/stdc++.h>
using namespace std;

// Paths Compression
int find(int x,vector<int> parent){
    if(x == parent[x]){
        return x;
    }
    return parent[x] = find(parent[x],parent);
}

// Rank
void Union(int x,int y,vector<int> &parent,vector<int> &rank){
    
    int x_p = find(x,parent);
    int y_p = find(y,parent);

    if(x_p == y_p){
        return;
    }

    if(rank[x_p] > rank[y_p]){
        parent[y_p] = x_p;
    }else if(rank[y_p] > rank[x_p]){
        parent[x_p] = y_p;
    }else{
        parent[x_p] = y_p;
        rank[y_p]+=1 ;
    }
}

int main(){

}