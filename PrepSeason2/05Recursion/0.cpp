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
// 0.Kth Symbol Grammer 👍 👍 👍
// 1.Tower of hanoi 👍 👍 👍

// Level 2
// Print Subsets || PowerSubsets || Print all Subsequences 👍 👍 👍
// Permutation with Spaces            ABC -> A_B_C , A_BC , AB_C ,ABC 👍👍 👍
// Permutation with Case Change       ab  -> ab , aB, Ab, AB 👍 👍 👍
// Letter Case Permutation 👍 👍 👍 


// Level 3
// Generate all Balanced Parentheses  👍 👍 👍
// Print N-digit binary numbers having more 1’s than 0’s for any prefix 👍 👍
// Joesph Problem 👍

#include<bits/stdc++.h>
using namespace std;


void Solve(vector<int> &arr,int k,int index,int ans){
    
    int n = arr.size();

    // Base case
    if(arr.size()==1){
        ans = arr[0];
        return;
    }

    // circular array
    index = (index + k) % n;
    arr.erase(arr.begin()+index);
    Solve(arr,k,index,ans);

}

int findWinner(int n,int k){
    vector<int> arr;
    for(int i=0;i<n;i++){
        arr.push_back(i+1);
    }
    k--;
    int index = 0;
    int ans   = -1;
    Solve(arr,k,index,ans);
    return ans;
}


int main(){



}