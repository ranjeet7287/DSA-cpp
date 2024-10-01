/*

Given two strings s and t, return the minimum window in s which will 
contain all the characters in t. If there is no such window in s that 
covers all characters in t, return the empty string "".
Note that If there is such a window, it is guaranteed that there will 
always be only one unique minimum window in s.

Example 1:
Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"

Example 2:
Input: s = "a", t = "a"
Output: "a"

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="totmtaptat";
    string s1="tta";
    unordered_map<char,int> map;
    for(int i=0;i<s1.length();i++){
        map[s1[i]]++;
    }
    int ans=INT_MAX;
    int i=0,j=0;
    int count=map.size();
    // starting to solve
    while(j<s.length()){

        if(map.find(s[j])!=map.end()){
            map[s[j]]--;
            if(map[s[j]]==0){
                count--;
            }
        }
        if(count>0){
            j++;
        }else if(count==0){
            ans = min(ans,j-i+1);
        }



    }

}