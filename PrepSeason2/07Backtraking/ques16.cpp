// Word Break II

class Solution {
    public:
        vector<string> result;
        unordered_set<string> st;
        void Solve(int i,string &currSen,string &s){
    
            if(i>=s.length()){
                result.push_back(currSen);
                return;
            }
    
            for(int j=i;j<s.length();j++){
                string tempWord = s.substr(i,j-i+1); // s[i:j]
                if(st.count(tempWord)){ // vaild word
                    string tempSentence = currSen; 
    
                    if(!currSen.empty()){
                        currSen += ' ';
                    }
    
                    currSen += tempWord; // take tempword
                    Solve(j+1,currSen,s); // explore
                    // Revert 
                    currSen = tempSentence;
    
                }
            }
        }
        vector<string> wordBreak(string s, vector<string>& wordDict) {
    
            for(string &word:wordDict){
                st.insert(word);
            }
    
            string currSentences = "";
            Solve(0,currSentences,s);
            return result;
        }
    };