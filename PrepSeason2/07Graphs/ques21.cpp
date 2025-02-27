class Solution {
    public:
    
        int find(int x,vector<int> &parent){
            if(x == parent[x]){
                return x;
            }
            return parent[x] = find(parent[x],parent);
        }
    
        void Union(int x,int y,vector<int> &parent,vector<int> &rank){
            int p_x = find(x,parent);
            int p_y = find(y,parent);
    
            if(p_x == p_y){
                return;
            }
    
            if(rank[p_x] > rank[p_y]){
                parent[p_y] = p_x;
            }else if(rank[p_x] < rank[p_y]){
                parent[p_x] = p_y;
            }else{
                parent[p_x] = p_y;
                rank[p_y] ++;
            }
        }
    
        long long countPairs(int n, vector<vector<int>>& edges) {
            vector<int> parent(n);
            vector<int> rank(n,0);
            parent.resize(n);
    
            for(int  i =0;i<n;i++){
                parent[i] = i;
            }
    
            // making components
            for(vector<int> &vec: edges){
    
                int u = vec[0];
                int v = vec[1];
    
                Union(u,v,parent,rank);
    
            }
    
            // map banalo 
            unordered_map<int,int> mp;
            for(int i=0;i<n;i++){
                int papaji = find(i,parent);
                mp[papaji]++; 
            }
    
    
            // step 4
            long long result = 0;
            long long remaingNode = n;
    
    
    
            for(auto &it : mp){
                // int papaji = it.first();
                long long  sizeOfComponent = it.second;
                result += sizeOfComponent *  (remaingNode - sizeOfComponent);
                remaingNode -= sizeOfComponent;
            }
    
            return result;
    
            
        }
    };