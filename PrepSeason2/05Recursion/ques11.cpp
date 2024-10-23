// Permutaion with spaces

#include<bits/stdc++.h>
using namespace std;

void PermutationSpace(string input,string output){

    if(input.empty()){
        cout<<output<<" ";
        return;
    }

    string op1 = output;
    string op2 = output;

    op1.push_back('_');
    op1.push_back(input[0]);
    op2.push_back(input[0]);
    input.erase(input.begin()+0);

    PermutationSpace(input,op1);
    PermutationSpace(input,op2);

    return;

}


int main(){
    string input;
    cin >> input;
    string output = " ";
    output.push_back(input[0]);
    input.erase(input.begin()+0);
}