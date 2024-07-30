// Sum of Array
// Send Feedback
// Given an array of length N, you need to find and return the sum of all elements of the array.
// Do this recursively.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Output Format :
// Sum
// Constraints :
// 1 <= N <= 10^3
// Sample Input 1 :
// 3
// 9 8 9
// Sample Output 1 :
// 26
// Sample Input 2 :
// 3
// 4 2 1
// Sample Output 2 :
// 7    


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int *arr,int n)
{
    // Base case
    if(n==0)
    {
        return 0;
    }
    int small=sum(arr+1,n-1);
    return small+arr[0];
}


int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=sum(arr,n);
    cout<<ans<<endl;
    delete[]arr;
}