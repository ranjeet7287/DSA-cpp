// Longest Substring k unique character
/*
Given a string you need to print the size of the longest possible substring that has exactly 
k unique characters.
Example:
Input:
2
aabacbebebe
3
aaaa
1
Output:
7
4 . */
#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s,int k) {
    int i=0,j=0;
    int maxi=0;
    int count=0;
    unordered_map<char,int> map;
    map.clear();
    while(j<s.size()){
        map[s[j]]++;
        if(map.size()==k){
            count++;
            maxi=max(maxi,count);
            j++;
        }else if(map.size()<k){
            while(map.size()<k){
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