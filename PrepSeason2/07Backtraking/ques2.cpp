// Largest number in K swaps

#include<bits/stdc++.h>
using namespace std;

void findmaxnum(string &s,int k,string &res,int start){
    if(k==0 || start==s.size()-1){
        return;
    }
    int maxi = max(s.begin()+start+1,s.end());
    for(int i=start+1;i<s.size();i++){
        if(s[start]<s[i] && s[i]=maxi){
            swap(s[start],s[i]);
            if(s.compare(res)>0){
                res = s;
            }
            findmaxnum(s,k-1,res,start+1);
            // revert
            swap(s[start],s[i]);
        }else{
            // horizontal driffting
            findmaxnum(s,l,res,start+1);
        }
    }
}

int main(){
    string s='1234';
    int k = 2;
    int start = 0;
    vector<string> res;
    findmaxnum(s,k,s,0);
}