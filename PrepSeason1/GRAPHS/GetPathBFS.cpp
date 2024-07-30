/*
Code : Get Path - BFS
Send Feedback
Given an undirected graph G(V, E) and two vertices v1 and v2 (as integers), find and print the path from v1 to v2 (if exists). Print nothing if there is no path between v1 and v2.
Find the path using BFS and print the shortest path available.
Note:
1. V is the number of vertices present in graph G and vertices are numbered from 0 to V-1. 
2. E is the number of edges present in graph G.
3. Print the path in reverse order. That is, print v2 first, then intermediate vertices and v1 at last.
4. Save the input graph in Adjacency Matrix.
Input Format :
The first line of input contains two integers, that denote the value of V and E.
Each of the following E lines contains two integers, that denote that there exists an edge between vertex a and b.
The following line contain two integers, that denote the value of v1 and v2.
Output Format :
Print the path from v1 to v2 in reverse order.
Constraints :
2 <= V <= 1000
1 <= E <= (V * (V - 1)) / 2
0 <= a <= V - 1
0 <= b <= V - 1
0 <= v1 <= 2^31 - 1
0 <= v2 <= 2^31 - 1
Time Limit: 1 second
Sample Input 1 :
4 4
0 1
0 3
1 2
2 3
1 3
Sample Output 1 :
3 0 1
Sample Input 2 :
6 3
5 3
0 1
3 4
0 3
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> *GetPathBFS(bool **edges,int n,int start,int end,bool *visited){
    queue<int> pq;
    pq.push(start);
    visited[start]=true;
    unordered_map<int,int> path;
    bool done=false;
    while(!pq.empty() && !done){
        int current_ver=pq.front();
        pq.pop();
        for(int i=0;i<n;i++){
            if(edges[current_ver][i]&& !visited[i]){
                pq.push(i);
                visited[i]=true;
                path[i]=current_ver;
                if(i==end){
                    done=true;
                }
            }
        }
    }
    if(!done){
        return NULL;
    }
    vector<int> *ans=new vector<int>();
    int current=end;
    ans->push_back(current);
    while(current!=start){
        current=path[current];
        ans->push_back(current);
    }
    return ans;
}
int main(){
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
    bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    int start,end;
    cin>>start>>end;
    vector<int> *ans=GetPathBFS(edges,n,start,end,visited);
    if(ans!=NULL){
        for(int i=0;i<ans->size();i++){
            cout<<ans->at(i)<<" ";
        }
    }
    for(int i=0;i<n;i++){
        delete[]edges[i];
    }
    delete []edges;
    delete []visited;
    return 0;
}