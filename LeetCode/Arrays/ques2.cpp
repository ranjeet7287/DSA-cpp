// 167. Two Sum II - Input Array Is Sorted

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
    int n = arr.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            return {i+1,j+1};
        }else if(arr[i]+arr[j]>target){
            j--;
        }else{
            i++;
        }
    }
    return {};
}