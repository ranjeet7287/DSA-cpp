// 
/*
Given a string s, find the length of the longest substring without repeating characters.


Example:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring

*/

#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int i=0,j=0;
    int maxi=0;
    int count=0;
    unordered_map<char,int> map;
    map.clear();
    while(j<s.size()){
        map[s[j]]++;
        if(map.size()==j-i+1){
            count++;
            maxi=max(maxi,count);
            j++;
        }else if(map.size()<j-i+1){
            while(map.size()<j-i+1){
                map[s[i]]--;
                if(map[s[i]]==0){
                    count--;
                    map.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    return maxi;
}



int main(){

}