// 207. Course Schedule
class Solution {
    public:
        bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    
            unordered_map<int,vector<int>> adj;
            for(vector<int> &vec : prerequisites){
                int u = vec[0];
                int v = vec[1];
                adj[u].push_back(v);
            }
    
    
    
            vector<int> inDgree(numCourses,0);
            // fill the indgree
            for(int i=0;i<numCourses;i++){
                for(int &v:adj[i]){
                    inDgree[v]++;
                }
            }
    
            // fill queue with indgree 0
            queue<int> qu;
            for(int i=0;i<inDgree.size();i++){
                if(inDgree[i]==0){
                    qu.push(i);
                }
            }
    
            // simple bfs
            vector<int> result;
            while(!qu.empty()){
                int u = qu.front();
                result.push_back(u);
                qu.pop();
    
                for(int &v:adj[u]){
                    inDgree[v]--;
                    if(inDgree[v]==0){
                        qu.push(v);
                    }
                }
            }
    
            if(result.size()==numCourses){
                return true;
            }
    
            return false;
    
    
    
        }
    };