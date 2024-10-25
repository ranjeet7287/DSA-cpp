#include<bits/stdc++.h>
using namespace std;

void Solve(int n,string output,int once,int zeros,vector<string> &result){

    // Base Condtion
    if(n==0){
        cout<<output<<endl;
        result.push_back(output);
        return;
    }
    
    string op1 = output;
    op1.push_back('1');
    Solve(n-1,op1,once+1,zeros,result);
    
    if(once>zeros){
        string op2 = output;
        op2.push_back('0');
        Solve(n-1,op2,once,zeros+1,result);
    }
    return;
}

int main(){
    int n;
    cin >> n;
    vector<string> result;
    int once = 0;
    int zeros = 0;
    string output = "";
    Solve(n,output,once,zeros,result);
}

