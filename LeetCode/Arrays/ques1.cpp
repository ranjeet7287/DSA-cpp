// 01 LeetCode 1. Two Sum

#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    unordered_map<int,int> map;
    map.clear();
    for(int i=0;i<n;i++){
        int reamaining = target - nums[i];
        if(map.find(reamaining)!=map.end()){
            return {map[reamaining],i};
        }
        map[nums[i]]=i;
    }
    return {};
}


int main(){

}

/*
Let's walk through the algorithm step by step and understand how it works in detail:

### **Purpose of the Algorithm:**
The goal of this algorithm is to find two numbers in the input vector `nums` whose sum is equal to the given `target`. The algorithm returns the indices of those two numbers.

### **Key Concepts:**
- **unordered_map<int, int> map**: This `map` (or hash table) stores the numbers from the array as keys and their corresponding indices as values. The purpose of the map is to quickly check if the complement (the difference between the target and the current number) has been seen before.

### **Step-by-Step Dry Run:**
Assume:
- `nums = [2, 7, 11, 15]`
- `target = 9`

1. **Initialization:**
   - `n = nums.size()` → `n = 4`
   - Create an empty `unordered_map<int, int> map`.

2. **First iteration (i = 0):**
   - `nums[i] = 2`
   - Calculate `reamaining = target - nums[i] = 9 - 2 = 7`.
   - Now, check if `7` is already in the `map`. It’s not, because the map is empty at this point.
   - Add `2` to the `map` with its index: `map[2] = 0`.

   Map state after this iteration:  
   `map = {2: 0}`

3. **Second iteration (i = 1):**
   - `nums[i] = 7`
   - Calculate `reamaining = target - nums[i] = 9 - 7 = 2`.
   - Now, check if `2` is in the `map`. It is, because we added it during the first iteration.
   - The algorithm finds that `2 + 7 = 9`, so it returns the indices `[0, 1]`.

Thus, the algorithm returns `{0, 1}` as the result, indicating that the numbers at index 0 (which is 2) and index 1 (which is 7) sum up to the target 9.

### **Details about the `unordered_map`:**
- **Keys**: Store the elements from the `nums` array.
- **Values**: Store the index of the elements in `nums`.
- **Find operation**: This is where the hash map shines. Checking whether a value exists (`map.find()`) is a fast, constant-time operation on average (`O(1)`).
  
### **Summary of How the Algorithm Works:**
- As you iterate through the array, for each number, you check if the complement (i.e., `target - current_number`) is already in the map.
- If the complement is found, you return the indices of the complement and the current number.
- If not, you add the current number and its index to the map and continue iterating.

The algorithm is very efficient, with a time complexity of `O(n)` due to the linear scan of the array and the `O(1)` average lookup time of the hash map.

*/