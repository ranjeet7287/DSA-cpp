// DSU -> Disjoint Set Union
#include<bits/stdc++.h>
using namespace std;

int find(int x,vector<int> &parent){
    if(x == parent[x]){
        return x;
    }
    return find(parent[x],parent);
}

void Union(int x,int y,vector<int> parent){
    
    int x_p = find(x,parent);
    int y_p = find(x,parent);

    if(x_p != y_p){
        parent[x_p] = y_p;
    }

}

int main(){

}



