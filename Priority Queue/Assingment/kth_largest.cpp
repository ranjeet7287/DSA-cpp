// Kth largest element
// Given an array A of random integers and an integer k, find and return the kth largest element in the array.
// Note: Try to do this question in less than O(N * logN) time.
// Input Format :
// The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol N.
// The following line contains N space separated integers, that denote the value of the elements of the array.
// The following contains an integer, that denotes the value of k.
// Output Format :
// The first and only line of output contains the kth largest element
// Constraints :
// 1 <= N, Ai, k <= 10^5
// Time Limit: 1 sec
// Sample Input 1 :
// 6
// 9 4 8 7 11 3
// 2
// Sample Output 1 :
// 9
// Sample Input 2 :
// 8
// 2 6 10 11 13 4 1 20
// 4
// Sample Output 2 :
// 10
#include<bits/stdc++.h>
using namespace std;
int kthLargest(int *arr,int n,int k){
    // min pripority queue
    priority_queue<int,vector<int>,greater<int>> minheap;
    for(int i=0;i<k;i++){
        minheap.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        // pusing largest element only
        if(arr[i] > minheap.top()){
            // poping smaller element
            minheap.pop();
            minheap.push(arr[i]);
        }
    }
    return minheap.top(); // <-- k th largest element 
}
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << kthLargest(arr, n, k);
    delete[] arr;
}