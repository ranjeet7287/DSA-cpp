// Permutations 

class Solution {
public:
    vector<vector<int>> res;
    int n;
    unordered_set<int> map; 

    void Slove(vector<int> &temp,vector<int> &nums){
        if(temp.size()==n){
            res.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){

            if(map.find(nums[i])==map.end()){
                map.insert(nums[i]);
                temp.push_back(nums[i]);
                Slove(temp,nums);
                temp.pop_back();
                map.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        n = nums.size();
        Slove(temp,nums);
        return res;
    }
};






class Solution {
public:
    vector<vector<int>> res;
    int n;
    void Slove(int idx,vector<int> &nums){
        if(idx==n){
            res.push_back(nums);
            return;
        }
        for(int i=idx;i<n;i++){
            swap(nums[i],nums[idx]);
            Slove(idx+1,nums);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        Slove(0,nums);
        return res;
    }
};