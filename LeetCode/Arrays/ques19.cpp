class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> map;
        int sum = 0 ;
        map[0]=-1;

        for(int i=0;i<n;i++){
            sum +=nums[i];
            int rem = sum%k;
            // present hai
            if(map.find(rem)!=map.end()){
                if(i - map[rem] >= 2){
                    return true;
                }
            }else{
                map[rem]=i;
            }
            
        }
        return false;
    }
};