/*
Code : BFS Traversal
Send Feedback
Given an undirected and disconnected graph G(V, E), print its BFS traversal.
Note:
1. Here you need to consider that you need to print BFS path starting from vertex 0 only. 
2. V is the number of vertices present in graph G and vertices are numbered from 0 to V-1. 
3. E is the number of edges present in graph G.
4. Take graph input in the adjacency matrix.
5. Handle for Disconnected Graphs as well
Input Format :
The first line of input contains two integers, that denote the value of V and E.
Each of the following E lines contains space separated two integers, that denote that there exists an edge between vertex a and b.
Output Format :
Print the BFS Traversal, as described in the task.
Constraints :
0 <= V <= 1000
0 <= E <= (V * (V - 1)) / 2
0 <= a <= V - 1
0 <= b <= V - 1
Time Limit: 1 second
Sample Input 1:
4 4
0 1
0 3
1 2
2 3
Sample Output 1:
0 1 3 2
*/
#include<bits/stdc++.h>
using namespace std;
void print_BFS(int **edges,int n,int sv,bool *visited){
    queue<int> pq;
    pq.push(sv);
    visited[sv]=true;
    while(!pq.empty()){
        int ans=pq.front();
        cout<<ans<<" ";
        pq.pop();
        for(int i=0;i<n;i++){
            if(ans==i){
                continue;
            }
            if(edges[ans][i]==1 && !visited[i]){
                pq.push(i);
                visited[i]=true;
            }
        }
    } 
}
void print_DFS(int **edges,int n,int start_vert,bool *visted)
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
            print_DFS(edges,n,i,visted);
        }
    }
}
void BFS(int **edges,int n){
    bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            print_BFS(edges,n,i,visited);             
        }
    }
    delete[] visited;
}
void DFS(int **edges ,int n){
    bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            print_DFS(edges,n,i,visited);             
        }
    }
    delete[] visited;

}
int main()
{
    int n,e;
    cin>>n>>e;
    int **edges=new int *[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int f_vert,s_vert;
        cin>>f_vert>>s_vert;
        edges[f_vert][s_vert]=1;
        edges[s_vert][f_vert]=1;
    }
    cout<<"DFS"<<endl;
    DFS(edges,n);
    cout<<"BFS"<<endl;
    BFS(edges,n);
}