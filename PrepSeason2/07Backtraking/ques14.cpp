// The Number of Beautiful Subsets 
class Solution {
    public:
        int result;
        int  K;
        void Solve(int idx,vector<int>&nums,unordered_map<int,int> &map){
    
            if(idx >= nums.size()){
                result++;
                return;
            }
    
            //  not take 
            Solve(idx+1,nums,map);
    
            // take
            if(!map[nums[idx]-K] && !map[nums[idx]+K]){
                
                map[nums[idx]]++;
                Solve(idx+1,nums,map);
                map[nums[idx]]--;
                
            }
        }
        int beautifulSubsets(vector<int>& nums, int k) {
            result = 0;
            K = k;
            unordered_map<int,int> map;
            Solve(0,nums,map);
            return result-1;
            // -1 excluding empty subset
        }
    };