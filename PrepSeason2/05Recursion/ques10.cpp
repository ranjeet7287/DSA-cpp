#include<bits/stdc++.h>
using namespace std;

void PrintUniqueSubset(string output,string input){

    unordered_map<int,int> map;

    // Solve   
    if(input.empty()){
        map.insert(output);
        return;
    }

    string op1 = output;
    string op2 = output;
    
    op2.push_back(input[0]);
    input.erase(input.begin()+0);
    
    PrintUniqueSubset(op1,input);
    PrintUniqueSubset(op2,input);   
    return; 
}

int main(){}