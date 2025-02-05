// Permutation of string 
#include<bits/stdc++.h>
using namespace std;

// Recursive soln + controlled resursive call
void findPermutation(string input,string output,vector<string> &v){

    if(input.size()==0){
        v.push_back(output);
        return;
    }
    unordered_set<char> map;
    for(int i=0;i<input.size();i++){
        map.insert(input[i]);
        if(map.find(input[i])==map.end()){
            string new_ip = input.substr(0,i)+input.substr(i+1);
            string new_op = output + input[i];
            findPermutation(new_ip,new_op,v);
        }
    }
    return;
}

// Recursive soln + controlled resursive call + backtracking
void findPermuatation1(string &input,int start,vector<string> &res){

    if(start==input.size()-1){
        res.push_back(input);
        return;
    }
    unordered_set<char> map;
    for(int i=start;i<input.size();i++){
        map.insert(input[i]);
        if(map.find(input[i])==map.end()){
            swap(input[start],input[i]);
            findPermuatation1(input,start+1,res);
            // revert changes
            swap(input[start],input[i]);
        }
    }


}

// 0(N*logN) * 0(n!)
int main(){
    vector<string> v;
    string s = 'abc';
    findPermutation(s,'',v);
}