// Maximum Number of Achievable Transfer Requests 

class Solution {
public:
    int res = INT_MIN;
    int m;
    void Solve(int idx,int count,int n,vector<int> &resultant,vector<vector<int>> &req){

        if(idx>=m){
           bool allZero = true;
           for(int &x : resultant){
            if(x!=0){
                allZero=false;
                break;
            }
           }

           if(allZero == true){
            res = max(res,count);
           }

           return;
        }

        int from = req[idx][0];
        int to = req[idx][1];
        resultant[from]--;
        resultant[to]++;
        Solve(idx+1,count+1,n,resultant,req);
        // revert changes
        resultant[from]++;
        resultant[to]--;
        Solve(idx+1,count,n,resultant,req);

    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        m = requests.size();
        vector<int> resultant(n,0);
        Solve(0,0,n,resultant,requests);
        return res;
    }
};