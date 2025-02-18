class Solution {
    public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // graph banao
        unordered_map<int,vector<int>> adj;
        for(vector<int> &vec:prerequisites){
            int v = vec[1];
            int u = vec[0];

            adj[u].push_back(v);
        }

        
    }
};