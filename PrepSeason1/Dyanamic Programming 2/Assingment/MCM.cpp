/*
Matrix Chain Multiplication
Send Feedback
Given a chain of matrices A1, A2, A3,.....An, you have to figure out the most efficient way to multiply these matrices. In other words, determine where to place parentheses to minimize the number of multiplications.
You will be given an array p[] of size n + 1. Dimension of matrix Ai is p[i - 1]*p[i]. You need to find minimum number of multiplications needed to multiply the chain.
Input Format:
The first line of input contains an integer, that denotes the value of n. The following line contains n+1 integers, that denote the value of elements of array p[].
Output Format:
The first and only line of output prints the minimum number of multiplication needed.
Constraints :
1 <= n <= 100
Time limit: 1 second
Sample Input 1:
3
10 15 20 25
Sample Output 1:
8000
Sample Output Explanation:
There are two ways to multiply the chain - A1*(A2*A3) or (A1*A2)*A3.
If we multiply in order- A1*(A2*A3), then number of multiplications required are 11250.
If we multiply in order- (A1*A2)*A3, then number of multiplications required are 8000.
Thus minimum number of multiplications required are 8000. 
*/
#include<bits/stdc++.h>
using namespace std;
int matrix_help(int *arr,int start,int end,int dp[][105])
{
    //WE have only one element only
    if(start==end){
        return dp[start][end]=0;
    }else if(start==end-1)
    {
        return dp[start][end]=0;
    }
    if(dp[start][end]!=-1){
        return dp[start][end];
    }
    int ans=INT_MAX;
    for(int k=start+1;k<=end-1;k++){
        ans=min(ans,matrix_help(arr,start,k,dp) + matrix_help(arr,k,end,dp)+arr[start]*arr[end]*arr[k]);
    }
    return dp[start][end]=ans;
}
int matrixChainMultiplication(int* arr, int n) 
{

    int dp[105][105];
    for(int i=0;i<105;i++){
        for(int j=0;j<105;j++){
            dp[i][j]=-1;
        }
    }
    return matrix_help(arr,0,n,dp);
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
    }

    cout << matrixChainMultiplication(arr, n);

    delete[] arr;
}