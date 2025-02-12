// Letter Combinations of a Phone Number 

class Solution {
public:
    vector<string> result;
    void Solve(int idx, string &digits,string &temp,unordered_map<char,string> &map){
        if(idx>=digits.length()){
            result.push_back(temp);
            return;
        }
        char cha = digits[idx];
        string str = map[cha];
        for(int i=0;i<str.length();i++){
            temp.push_back(str[i]);
            Solve(idx+1,digits,temp,map);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0){
            return {};
        }
        unordered_map<char,string> map;
        map['2']='abc';
        map['3']='def'; 
        map['4']='ghi';
        map['5']='jkl';
        map['6']='mno';
        map['7']='pqrs';
        map['8']='tuv';
        map['9']='wxyz';
        string temp="";
        Solve(0,digits,temp,map);
        return result;
    }
};