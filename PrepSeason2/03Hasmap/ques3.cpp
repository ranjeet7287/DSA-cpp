// 290. Word Pattern
#include<bits/stdc++.h>
using namespace std;

// Approch 1
bool wordPattern(string pattern, string s) {
    // Tokensing a string 
    vector<string> words;

    stringstream ss(s);
    int count=0;
    while(getline(ss,token,' ')){
        words.push_back(token);
        count++;
    }

    int n = pattern.length();

    if(n!=count){
        return false;
    }

    unordered_map<string,char> map;
    map.clear();
    set<char> used;

    for(int i=0;i<n;i++){
        stirng word=words[i];
        char ch = pattern[i];

        if(map.find(word)==map.end() && used.find(ch)==used.end()){
            used.insert(ch);
            map[word]=ch;
        }else if(map[word]!=pattern[i]){
            return false;
        }
    }
    return true;

}


// Approch 2

bool wordPattern1(string pattern, string s){
    unordered_map<char,int> chartoindex;
    unordered_map<string,int> wordtoindex;

    stringstream ss(s);
    string token;

    int countToken=0;
    int i=0;
    int n =pattern.size();

    while(ss>>token){
        countToken++;

        if(i==n){
            return false;
        }

        if(chartoindex[pattern[i]]!=wordtoindex[token]){
            return false;
        }

        chartoindex[pattern[i]] = i+1;
        wordtoindex[token]=i+1;

        i++;
    }

    if(countToken!=n){
        return false;
    }

    if(i!=n){
        return false;
    }
    return true;




}

int main(){

}
