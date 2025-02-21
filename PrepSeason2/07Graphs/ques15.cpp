class Solution {
    public:
        bool BFS(vector<vector<int>> &adj,int u,vector<int> &color,int curr_color){
            color[u] = curr_color;
            queue<int> q;
            q.push(u);
    
            while(!q.empty()){
                int curr = q.front();
                q.pop();
    
                for(int &v : adj[curr]){
                    
                    if(color[v]==color[curr]){
                        return false;
                    }
                    else if(color[v]==-1){
                        color[v] = 1 - color[curr];
                        q.push(v);
                    }
                }
    
            }
            return true;
        }
    
    
        bool isBipartite(vector<vector<int>>& adj) {
            int V = adj.size();
            vector<int> color(V,-1);
    
            for(int u=0;u<V;u++){
                if(color[u]==-1){
                    if(!BFS(adj,u,color,1)){
                        return false;
                    }
                }
            }
            return true;
        }
    };