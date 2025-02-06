// Combinations Leetcode-77


// 1st Way
class Solution {
public:
    vector<vector<int>> result;
    
    void Solve(int start,int n,int k,vector<int> &temp){
        if(k==0){
            result.push_back(temp);
            return;
        }
        if(start > n){
            return;
        }
        temp.push_back(start);
        Solve(start+1,n,k-1,temp);
        temp.pop_back();
        Solve(start+1,n,k,temp);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        Solve(1,n,k,temp);
        return result;
    }
};


class Solution {
public:
    vector<vector<int>> result;
    
    void Solve(int start,int n,int k,vector<int> &temp){
        if(k==0){
            result.push_back(temp);
            return;
        }
        if(start > n){
            return;
        }
        for(int i=start;i<=n;i++){
            temp.push_back(i);
            Solve(i+1,n,k-1,temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        Solve(1,n,k,temp);
        return result;
    }
};