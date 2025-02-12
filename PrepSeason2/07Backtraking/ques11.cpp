// Combination Sum IV
class Solution {
public:
    int n;
    int t[201][1001];
    int Solve(int idx,int target,vector<int> &nums){
    

        if(idx>=n ||target<0){
            return 0;
        }
        if(target==0){
            return 1; 
        }

        if(t[idx][target]!=-1){
            return t[idx][target];
        }

        int take = Solve(0,target-nums[idx],nums);
        int not_take = Solve(idx+1,target,nums);

        return t[idx][target] = take + not_take;
    }
    int combinationSum4(vector<int>& nums, int target) {
        n = nums.size();
        memset(t,-1,sizeof(t));
        return Solve(0,target,nums);
    }
};




// Combination Sum IV
class Solution {
public:
    int n;
    int t[201][1001];
    int Solve(int idx,int target,vector<int> &nums){
    

        if(idx>=n ||target<0){
            return 0;
        }
        if(target==0){
            return 1; 
        }

        if(t[idx][target]!=-1){
            return t[idx][target];
        }

        int result =0;
        for(int i=idx;i<n;i++){
            int take = Solve(0,target-nums[i],nums);
            result += take;
        }
        return t[idx][target] =result;
    }
    int combinationSum4(vector<int>& nums, int target) {
        n = nums.size();
        memset(t,-1,sizeof(t));
        return Solve(0,target,nums);
    }
};