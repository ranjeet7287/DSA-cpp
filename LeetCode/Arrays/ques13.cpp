class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int q = queries.size();

        int sumEven = 0;

        // find sumEven
        for(int &x : nums){
            if(x%2==0){
                sumEven+=x;
            }
        }

        vector<int> result;

        // operations
        for(int i=0;i<q;i++){
            int val = queries[i][0];
            int index = queries[i][1];

            // if even value
            if(nums[index]%2==0){
                sumEven-=nums[index];
            }

            nums[index]+=val;

            if(nums[index]%2==0){
                sumEven+=nums[index];
            }
            result.push_back(sumEven);
        }

        return result;
        
    }
};