// DFS --> Depth first search
#include<bits/stdc++.h>
using namespace std;
void print(int **arr,int vertices,int s_vert,bool *visited){
    cout<<s_vert<<endl;
    visited[s_vert]=true;
    for(int i=0;i<vertices;i++){
        if(i==s_vert){
            continue;
        }
        if(arr[s_vert][i]==1){
            if(visited[i]){
                continue; 
            }
            print(arr,vertices,i,visited);
        }
    }
}
int main()
{
    int vertices,edges;
    cin>>vertices>>edges;
    int **arr=new int*[vertices];
    for(int i=0;i<vertices;i++){
        arr[i]=new int[vertices];
        for(int j=0;j<vertices;j++){
            arr[i][j]=0;
        }
    }
    for(int i=0;i<edges;i++){
        int first_vert;
        int sec_vert;
        cin>>first_vert>>sec_vert;
        arr[first_vert][sec_vert]=1;
        arr[sec_vert][first_vert]=1;
    }
    bool *visted=new bool[vertices];
    for(int i=0;i<vertices;i++){
        visted[i]=false;
    }
    print(arr,vertices,0,visted);
}