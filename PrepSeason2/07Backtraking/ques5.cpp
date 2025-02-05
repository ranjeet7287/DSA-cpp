// Print all possible Palindromic partitions

class Solution {
public:
    bool isPalin(string &s,int start,int end){
        while(start<end){
            if(s[start]!=s[end]){
                return false;
            }else{
                start++;
                end--;
            }
        }

        return true;
    }
    void backtraking(string &s,int idx,vector<string> &crr,vector<vector<string>> &res){
        if(idx==s.size()){
            res.push_back(crr);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(isPalin(s,idx,i)){
                crr.push_back(s.substr(idx,i-idx+1));
                backtraking(s,i+1,crr,res);
                crr.pop_back();
            }
        }

    }
    vector<vector<string>> partition(string s) {
        int idx = 0;
        vector<vector<string>> res;
        vector<string> curr;
        backtraking(s,idx,curr,res);
        return res;
    }
};