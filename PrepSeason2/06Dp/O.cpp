/* --> VARTIONS 1  BOUNDED KANPSACK<-- */ 
// 0.0-1 Knapsack Problems 👍👍        
// 1.Subset Sum 👍👍
// 2.Equal Sum Partion 👍👍
// 3.Count of subset sum 👍 👍
// 4.Minimum subset sum diffrence 👍 👍
// 5.Target Sum 👍 👍
// 6.Number of subset with given diffrence 👍 👍

 
/* --> VARTIONS 2 UN-BOUNDED KANPSACK<--*/
// 0.Unbonded Knapsack 👍 👍
// 1.Road Cuttting 👍 👍
// 2.CoinChange 1  👍 👍
// 3.CoinChange 2 👍 👍


//----------- VARTIONS 3 LCS -----------//
// Longest Common Subsequence 👍 👍
// Longest Common Substring 👍 👍
// Print LCS 👍👍
// Shortest Common SuperSequence 👍 👍
// Minimum Number of Insertion and Deletion to convert String a to String b 👍👍
// Longest Palindromic Subsequence 👍👍
// Minimum number of deletion in a string to make it a palindrome 👍👍
// Print shortest common Supersequence 👍👍
// Longest repeating subsequence 👍👍
// Sequence Pattern Matching 👍👍
// Minimum number of insertion in a string to make it a palindrome 👍👍

// ---------Matrix chain multiplication Vartions 3--------------------//
// Matrix chain multiplication 👍👍
// Palindrome Partitioning Recursive 👍
// Evaluate Expression to True Boolean Parenthesization Recursive👍
// Scrambled String Recursive 👍
// Egg Dropping Problem Recursive 👍


// ----- Tree Vartion 4 ----------//
// Diameter of tree 👍
// Maximum Path Sum | From any node to any node 



// Kadane's Algo:
// 1.Maximum difference of 0's and 1's in a binary string
// 2.Maximum Sum Circular array
// 3.Smallest sum contiguous subarray
// 4.Largest sum increasing contiguous subarray
// 5.Maximum Product Subarray
// 6.Largest sum contiguous subarray with only non-negative elements.
// 7.Largest sum contiguous subarray with unique elements.
// 8.Maximum Alternating Sum Subarray
// 9.Maximum Sum Rectangle In A 2D Matrix

#include<bits/stdc++.h>
using namespace std;


template<typename T>
class Tree{
    public:
    T data;
    Tree *left;
    Tree *right;
    Tree(T data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    ~Tree(){
        delete left;
        delete right;
    }
}

int Solve(Node *root,int &result){
    if(root==NULL){
        return 0;
    }
    int l = Slove(root->left,result);
    int 
}

int main(){

     
}