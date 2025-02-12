// Find the Minimum Cost Array Permutation 

class Solution {
    public:
        int n;
        int minScore = INT_MAX;
        vector<int> result;
    
        void Solve(vector<int> &nums,vector<bool> &visited,vector<int> &perm,int score ){
    
            if(score > minScore){
                return;
            }
    
            if(perm.size()==n){
                score += abs(perm.back() - nums[perm[0]]);
    
                if(minScore>score){
                    minScore = score;
                    result = perm;
                } 
                return;
            }
    
            for(int num=0;num<n;num++){
                if(!visited[num]){
                    visited[num] = true;
                    perm.push_back(num);
                    int s = perm.size();
                    Solve(nums,visited,perm,score+abs(perm[s-2]-nums[perm[s-1]]));
    
                    visited[num] = false;
                    perm.pop_back();
                }
            }
    
        }
    
        vector<int> findPermutation(vector<int>& nums) {
            n = nums.size();
            vector<bool> visited(n,false);
            vector<int> perm={0};
            visited[0] = true;
            
            Solve(nums,visited,perm,0);
    
            return result;
        }
    
    };