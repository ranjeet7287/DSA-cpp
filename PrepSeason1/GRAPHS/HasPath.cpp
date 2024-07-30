/*
Code : Has Path
Send Feedback
Given an undirected graph G(V, E) and two vertices v1 and v2 (as integers), check if there exists any path between
them or not. Print true if the path exists and false otherwise.
Note:
1. V is the number of vertices present in graph G and vertices are numbered from 0 to V-1. 
2. E is the number of edges present in graph G.
Input Format :
The first line of input contains two integers, that denote the value of V and E.
Each of the following E lines contains two integers, that denote that there exists an edge between vertex 'a' and 'b'.
The following line contain two integers, that denote the value of v1 and v2.
Output Format :
The first and only line of output contains true, if there is a path between v1 and v2 and false otherwise.
Constraints :
0 <= V <= 1000
0 <= E <= 1000
0 <= a <= V - 1
0 <= b <= V - 1
0 <= v1 <= V - 1
0 <= v2 <= V - 1
Time Limit: 1 second
Sample Input 1 :
4 4
0 1
0 3
1 2
2 3
1 3
Sample Output 1 :
true
Sample Input 2 :
6 3
5 3
0 1
3 4
0 3
Sample Output 2 :
false
*/
#include<bits/stdc++.h>
using namespace std;

bool HasPath(bool **edges,int n,int start_vert,int end_vert,bool *visited)
{
    if(start_vert==end_vert){
        return true;
    }
    visited[start_vert]=true;
    for(int i=0;i<n;i++){
        if(edges[start_vert][i] && !visited[i]){
            if(HasPath(edges,n,i,end_vert,visited)){
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n,e;
    cin>>n>>e;
    bool **edges=new bool*[n];
    for(int i=0;i<n;i++){
        edges[i]=new bool[n];
        for(int j=0;j<n;j++){
            edges[i][j]=false;
        }
    }
    for(int j=0;j<e;j++){
        int f_vert,s_vert;
        cin>>f_vert>>s_vert;
        edges[f_vert][s_vert]=true;
        edges[s_vert][f_vert]=true;
    }
    int start_vert,end_vert;
    cin>>start_vert>>end_vert;
    bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    bool ans=HasPath(edges,n,start_vert,end_vert,visited);
    if(ans){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    for(int i=0;i<n;i++){
        delete[]edges[i];
    }
    delete[]edges;
    delete[]visited;
}