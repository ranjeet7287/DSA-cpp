// 219. Contains Duplicate II

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> map;

        for(int i = 0 ;i<n;i++){
            // check if present in map and abs(map[nums[i]] -i) less than equal to k
            if(map.find(nums[i])!=map.end() &&
                abs(map[nums[i]] -i) <=k){
                    return true;
            }else{
                map[nums[i]] = i; // <value,index> 
            }
        }
        return false;
    }
};