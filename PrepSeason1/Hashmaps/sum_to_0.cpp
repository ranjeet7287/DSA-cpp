// Code : Pair Sum to 0

// Given a random integer array A of size N. Find and print the count of pair of elements in the array 
// which sum up to 0.
// Note: Array A can contain duplicate elements as well.
// Input format:
// The first line of input contains an integer, that denotes the value of the size of the array. Let us
// denote it with the symbol N.
// The following line contains N space separated integers, that denote the value of the elements of the array.
// Output format :
// The first and only line of output contains the count of pair of elements in the array which sum up to 0. 
// Constraints :
// 0 <= N <= 10^4
// Time Limit: 1 sec
// Sample Input 1:
// 5
// 2 1 -2 2 3
// Sample Output 1:
// 2
#include<bits/stdc++.h>
using namespace std;

int pairsum(int *arr,int n)
{
    int count=0;
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        // checking if it's neagative exist or not
        if(map.count(-1*arr[i])>0){
            cout=count+map[-1*arr[i]];
        }
        map[arr[i]]++;
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << pairSum(arr, n);
    delete[] arr;
}