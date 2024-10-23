// 784. Letter Case Permutation
class Solution {
public:
    
    void Slove(string input,string output,vector<string> &result){

        // Base Condtion
        if(input.empty()){
            result.push_back(output);
            return;
        }

        if(isalpha(input[0])){
            
            string op1 = output;
            string op2 = output; 

            op1.push_back(tolower(input[0]));
            op2.push_back(toupper(input[0]));
            input.erase(input.begin()+0);
            
            Slove(input,op1,result);
            Slove(input,op2,result);

        }else{
            
            string op1 = output;
            
            op1.push_back(input[0]);
            input.erase(input.begin()+0);
            
            Slove(input,op1,result);
        }

        return;
    }

    vector<string> letterCasePermutation(string s) {
        string input  = s;
        string output = "";
        vector<string> result;
        Slove(input,output,result);
        return result;
    }
};