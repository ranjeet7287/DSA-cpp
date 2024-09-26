// Variable Subarry of sum k
// Given an array containing N positive integers and an integer K.
// Your task is to find the length of the longest Sub-Array with sum of the elements equal to the given value K.

// For Input:
// 1
// 7 5
// 4 1 1 1 2 3 5
// your output is: 
// 4 . 
#include<bits/stdc++.h>
using namespace std;

int MaxSumSubArray(int arr[],int n,int k){
    int i=0;
    int j=0;
    int sum=0;
    int max_sub = INT_MIN;
    while(j<n){
        // cal
        sum = sum+arr[j];
        if(sum<k){
            j++;
        }else if(sum==k){
            max_sub=max(max_sub,j-i+1);
            j++;
        }else if(sum>k){
            while(sum>k){
                sum=sum-arr[i];
                i++;
            }
            j++;
        }
    }
    return max_sub;
}


int main(){

}