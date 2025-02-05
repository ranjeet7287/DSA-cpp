// Level 0 
// 0.n -> 1 👍 👍 👍 👍
// 1.1 -> n 👍 👍 👍 👍
// 2.factorial 👍 👍 👍 👍
// 3.Height of Binary Tree 👍 👍 👍 👍
// 4.sort arr 👍 👍 👍 👍
// 5.sort stack 👍 👍 👍
// 6.delete middle element from stack 👍 👍 👍 👍
// 7.reverse a stack 👍 👍 👍

// Level 1
// 0.Kth Symbol Grammer 👍 👍
// 1.Tower of hanoi 👍 👍

// Level 2
// Print Subsets || PowerSubsets || Print all Subsequences 👍 👍
// Permutation with Spaces            ABC -> A_B_C , A_BC , AB_C ,ABC 👍👍
// Permutation with Case Change       ab  -> ab , aB, Ab, AB 👍 👍
// Letter Case Permutation 👍 👍


// Level 3
// Generate all Balanced Parentheses  👍 👍
// Print N-digit binary numbers having more 1’s than 0’s for any prefix 👍
// Joesph Problem 👍


#include<bits/stdc++.h>
using namespace std;

void Slove(string input,string output){
    
    if(input.empty()){
        cout<<output<" ";
        return; 
    }

    string op1 = output;
    string op2 = output;

    op1.push_back(tolower(input.at(0)));
    op2.push_back(toupper(input.at(0)));

    input.erase(input.begin()+0);

    Slove(input,op1);
    Slove(input,op2);
    return;
    
}

int main(){

}