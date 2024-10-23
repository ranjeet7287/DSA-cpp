// Permutation with case change
#include<bits/stdc++.h>
using namespace std;
    
void Permutation(string input,string output){
  
    if(input.empty()){
        cout<<output<<endl;
        return;
    }

    

    string op1  = output;
    string op2  = output;

    op1.push_back(input[0]);
    op2.push_back(toupper(input[0]));
    input.erase(input.begin()+0);

    Permutation(input,op1);
    Permutation(input,op2);
    return;

}

int main(){

}