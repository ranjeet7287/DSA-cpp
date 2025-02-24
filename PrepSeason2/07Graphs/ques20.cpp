// Number of Operations to Make Network Connected LC - 1319

class Solution {
    public:
        int find(int x,vector<int> &parent){
            if(x == parent[x]){
                return x;
            }
            return parent[x] = find(parent[x],parent);
        }
        void Union(int x,int y,vector<int> &parent,vector<int> &rank){
            
            int x_p = find(x,parent);
            int y_p = find(y,parent);
    
            if(x_p==y_p){
                return;
            }
    
            if(rank[x_p] > rank[y_p]){
                parent[y_p] = x_p;
            }else if(rank[x_p] < rank[y_p]){
                parent[x_p] = y_p;
            }else{
                parent[x_p] = y_p;
                rank[y_p]++;
            }
    
        }
        int makeConnected(int n, vector<vector<int>>& connections) {
            vector<int> parent(n,0);
            vector<int> rank(n,0);
    
            for(int i=0;i<n;i++){
                parent[i]=i;
            }
    
            if(connections.size() < n-1){
                return -1;
            }
    
            int total_component  = n; 
    
            for(vector<int> &v : connections){
                if(find(v[0],parent) != find(v[1],parent)){
                    Union(v[0],v[1],parent,rank);
                    total_component--;
                }
            }
    
            return  total_component-1;
    
        }
    };