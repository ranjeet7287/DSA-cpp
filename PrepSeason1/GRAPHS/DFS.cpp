// DFS --> Depth first search
#include<bits/stdc++.h>
using namespace std;
void print(int **edges,int n,int start_vert,bool *visted)
{
    cout<<start_vert<<endl;
    visted[start_vert]=true;
    // Now we will see adjacent of start_vertices
    for(int i=0;i<n;i++){
        if(i==start_vert){
            continue;
        }
        if(edges[start_vert][i]==1){
            if(visted[i]){
                continue;
            }
            print(edges,n,i,visted);
        }
    }
}
int main()
{
    // n->no of vertices e->no of edges
    int n,e;
    cin>>n>>e;
    int **edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            // 0 -> No edges
            edges[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int f_ver,s_ver;
        cin>>f_ver>>s_ver;
        edges[f_ver][s_ver]=1;
        edges[s_ver][f_ver]=1;
    }
    bool *vistied=new bool[n];
    for(int i=0;i<n;i++){
        vistied[i]=false;
    }
    print(edges,n,0,vistied);
}