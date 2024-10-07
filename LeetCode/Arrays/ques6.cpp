// 31. Next Permutation

#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums){
    int n = nums.size();
    int flag = -1;
    for(int i=n-1;i>0;i--){
        if(nums[i] >nums[i-1]){
            flag = i-1;
            break;
        }
    }
    if(flag!=-1){
        int swap_index = flag;
        for(int j = n-1;j>=flag+1;j--){
            if(nums[j]>nums[flag]){
                swap_index = j;
                break;
            }
        }
        swap(nums[flag],nums[swap_index]);
    }
    reverse(nums.begin()+flag+1,nums.end());
}

int main(){

}