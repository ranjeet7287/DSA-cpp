class Solution {
public:

    void Solve(string output,int open,int close,vector<string> &result){

        // base condtions
        if(open == 0 && close == 0){
            result.push_back(output);
            return;
        }    

        if(open!=0){
            string op1 = output;
            op1.push_back('(');
            Solve(op1,open-1,close,result);
        }

        if(close > open){
            string op2 = output;
            op2.push_back(')');
            Solve(op2,open,close-1,result);
        }

        return;
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        int open  = n;
        int close = n;
        string output = "";
        Solve(output,open,close,result);
        return result;

    }
};