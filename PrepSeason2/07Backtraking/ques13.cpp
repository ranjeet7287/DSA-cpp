// Path with Maximum Gold 

class Solution {
    public:
        int m,n;
        vector<vector<int>> directions{{-1,0},{1,0},{0,1},{0,-1}};
        int DFS(vector<vector<int>> &grid,int i,int j){
            if(i>=m || i<0 || j>=n ||j<0 || grid[i][j]==0){
                return 0; // Zero Gold
            }
            int orginalGoldValue = grid[i][j];
            grid[i][j] = 0;
    
            int max_gold = 0;
    
            // up,down,right,left
            // DFS(grid,i-1,j);
            // DFS(grid,i+1,j);
            // DFS(grid,i,j-1);
            // DFS(grid,i,j+1);
    
            for(vector<int> &dir:directions){
                int new_i = i + dir[0];
                int new_j = j + dir[1];
    
                max_gold = max(max_gold,DFS(grid,new_i,new_j));
            }
    
    
            // revert changes
            grid[i][j] = orginalGoldValue;
    
            return orginalGoldValue + max_gold;
    
        }
    
        int getMaximumGold(vector<vector<int>>& grid) {
            m = grid.size();
            n = grid[0].size();
    
            int max_gold = 0;
    
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(grid[i][j] != 0){
                        // it has gold
                        max_gold = max(max_gold,DFS(grid,i,j));
                    }
                }
            }
    
            return max_gold;
        }
    };