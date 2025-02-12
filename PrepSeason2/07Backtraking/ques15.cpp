// 1255. Maximum Score Words Formed by Letters
class Solution {
    public:
        int maxScore;
        int n;
    
        void Solve(int i,vector<int> &score,vector<string> &words,int currentScore,vector<int> &freq){
            maxScore = max(maxScore,currentScore);
            if(i>=n){
                return;
            }
    
            // can we take words[i]
            int j = 0;
            int tempScore = 0;
            vector<int> tempFreq=freq; // 0(26)
            while(j < words[i].length()){ // 0(L)
                char ch = words[i][j];
                tempFreq[ch-'a']--;
                tempScore += score[ch-'a'];
                if(tempFreq[ch-'a']<0){
                    break;
                }
                j++;
            }
    
            if(j==words[i].length()){
                // We were able to form this word word[i]
                // Take option
                Solve(i+1,score,words,currentScore+tempScore,tempFreq);
            }
    
            // No take
            Solve(i+1,score,words,currentScore,freq);
        }
    
        int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
            
            vector<int> freq(26,0);
            
            maxScore = INT_MIN;
            
            n = words.size();
            
            for(char &ch : letters){
                freq[ch-'a']++;
            }
    
            Solve(0,score,words,0,freq);
            return maxScore;
            
        }
    };