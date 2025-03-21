 class Solution {
public:

    void Solve(vector<int> arr,int k,int index,int &ans){

        int n = arr.size();
        // Base case
        if(arr.size()==1){
            ans = arr[0];
            return;
        }

        // circular array
        index = (index + k) % n;
        arr.erase(arr.begin()+index);

        Solve(arr,k,index,ans);

    }

    int findTheWinner(int n, int k) {
        vector<int> arr;
        for(int i=0;i<n;i++){
            arr.push_back(i+1);
        }
        k--;
        int index = 0;
        int ans = -1;
        Solve(arr,k,index,ans);
        return ans;
    }
};