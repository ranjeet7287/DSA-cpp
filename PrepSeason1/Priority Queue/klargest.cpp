// Code : K largest elements
// Send Feedback
// You are given with an integer k and an array of integers that contain numbers in random order. Write a program to find k largest numbers from given array. You need to save them in an array and return it.
// Time complexity should be O(nlogk) and space complexity should be not more than O(k).
// Order of elements in the output is not important.
// Input Format :
// Line 1 : Size of array (n)
// Line 2 : Array elements (separated by space)
// Line 3 : Integer k
// Output Format :
// k largest elements
// Sample Input :
// 13
// 2 12 9 16 10 5 3 20 25 11 1 8 6 
// 4
// Sample Output :
// 12
// 16
// 20
// 25
#include <iostream>
#include <vector>
using namespace std;

#include<queue>
#include<vector>
vector<int> kLargest(int *arr, int n, int k)
{
    //  min pq
    priority_queue<int,vector<int>,greater<int> > pq;
    // puting staring  k-1 element into the array
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    // comparing with k to nth element
    for (int i = k; i < n; i++)
    {
        // if pq.top()--> minimum number we just need to insert or pop 
        if (pq.top() < arr[i])
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    vector<int> v;
    while (!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }
    return v;
}


int main() {
	
	int size;
	cin >> size;
	int *input = new int[1 + size];
	
	for(int i = 0; i < size; i++)
		cin >> input[i];
    
    int k;
    cin >> k;
    
    vector<int> output = kLargest(input, size, k);
    for(int i = 0; i < output.size(); i++)
        cout << output[i] << endl;
	
	return 0;
}