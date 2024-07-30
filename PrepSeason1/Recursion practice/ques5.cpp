// Check Number
// Given an array of length N and an integer x, you need to find if x is present 
// in the array or not. Return true or false.
// Do this recursively.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x
// Output Format :
// 'true' or 'false'
// Constraints :
// 1 <= N <= 10^3
// Sample Input 1 :
// 3
// 9 8 10
// 8
// Sample Output 1 :
// true
// Sample Input 2 :
// 3
// 9 8 10
// 2
// Sample Output 2 :
// false


#include<iostream>
using namespace std;
bool check_presence(int *arr,int n,int x)
{
    if(n==0){
        return false;
    }
    if(arr[0]==x){
        return true;
    }
    int small=check_presence(arr+1,n-1,x);
    return small;
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    bool ans=check_presence(arr,n,x);
    cout<<ans;
}