class Solution {
    public:
    
        bool hasCycle;
        void DFS(unordered_map<int,vector<int>> &adj,int u,vector<bool> &visited,stack<int> &st,vector<bool> &inRecusrion){
            visited[u] = true;
            inRecusrion[u]= true;
            // phele mere u ke baccho ko daalo
            for(int &v : adj[u]){
    
                if(inRecusrion[v]==true){
                    hasCycle = true;
                    return;
                }
    
                if(!visited[v]){
                    DFS(adj,v,visited,st,inRecusrion);
                }
            }
    
            // abb mujhe daalo stack me daalo
            st.push(u);
            inRecusrion[u]= false;
    
        }
        
        vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
            
            unordered_map<int,vector<int>> adj;
            hasCycle = false;
            for(vector<int> &v:prerequisites){
                int a = v[0];
                int b = v[1];
                adj[b].push_back(a);
            }
    
            stack<int> st;
            vector<bool> visited(numCourses,false);
            vector<bool> inRecusrion(numCourses,false);
    
            for(int i=0;i<numCourses;i++){
                if(!visited[i]){
                    DFS(adj,i,visited,st,inRecusrion);
                }
            }
    
            if(hasCycle==true){
                return {};
            }
    
    
            vector<int> result;
            while(!st.empty()){
                int e = st.top();
                st.pop();
                result.push_back(e);
            }
            return result;
        }
    };