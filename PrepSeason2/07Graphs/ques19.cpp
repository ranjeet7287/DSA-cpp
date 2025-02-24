// 990. Satisfiability of Equality Equations
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
            }else if(rank[p_x]<rank[p_y]){
                parent[p_x] = p_y;
            }else{
                parent[p_y] = p_x;
                rank[p_x]++;
            }
        }
        
        bool equationsPossible(vector<string>& equations) {
            vector<int> parent;
            vector<int> rank;
            parent.resize(26);
            rank.resize(26,0);
    
            for(int i=0;i<26;i++){
                parent[i] = i;
            }
            // first do union  of equal to chars
            for(string &s : equations){
                if(s[1] == '='){ // 'a==b'
                    Union(s[0]-'a',s[3]-'a',parent,rank);
                }
            }
    
            // find != waale cases and check validity
    
            for(string &s : equations){
                if(s[1]=='!'){ // 'a!=b'
                  int x = find(s[0]-'a',parent);
                  int y = find(s[3]-'a',parent);
                  if(x == y){
                    return false;
                  }
                }
            }
    
            return true;
    
        }
    
    
    };