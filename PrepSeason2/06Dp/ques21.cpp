
// Format
int Slove(int arr[],int i,int j){
    // base condtion --> thin of smallest IN-VAILD input
    if(i>=j){
        return 0;
    }

    for(int k=i;k<j;k++){
        // caculate temp ans
        int temp = Slove(arr,i,k) + Solve(arr,k+1,j);

        // ans=

    }
}





// MCM  -> Matrix Chain Multiplication 

#include<bits/stdc++.h>
using namespace std;



int Solve(vector<int> &arr,int i,int j){

    // Base Condition  -> Smallest Invaid Input in this case.
    for(i>=j){
        return 0;
    }

    int min = INT_MAX;

    for(int k = i ;k<=j-1;k++){
        int temp =  Solve(arr,i,k) + 
                    Solve(arr,k+1,j) +
                    arr[i-1] * arr[k] * arr[j];
        min = min(min,temp);
    }


}

int main(){

}


/*

class Solution{
    static int matrixMultiplication(int N, int arr[])
    {
       
        int[][] memoTable = new int[N+1][N+1]; 
        for(int i=0;i<=N;i++)
       {
           for(int j=0;j<=N;j++)
           {
               memoTable[i][j]=-1;
           }
       }
        return solveByDP(1,N-1, arr,memoTable);
        
    }
    
    static int solveByDP(int i, int j, int arr[],int[][] memoTable)
    {
        
        
        if(i>=j)
            return 0;
            
        if (memoTable[i][j] != -1)  
        { 
            return memoTable[i][j]; 
        }
        
        int cost=Integer.MAX_VALUE;
        
        for(int k=i;k<=j-1;k++)
        {
            cost = 
            Math.min(
            cost,
            solveByDP(i,k,arr,memoTable)+solveByDP(k+1,j,arr,memoTable)+arr[i-1]*arr[k]*arr[j]
            );
            
        }
            
        memoTable[i][j] = cost;
        
        For every i,j(i and j is a way of dividng the array) we find the way of minimum cost using k and
        store it in memo table
        return cost;
    }
}
*/

int static t[1001][1001];
memset(t,-1,sizeof(t));

int Solve(int &arr[],int i,int j){

    if(i>=j){
        return 0;
    }

    if(t[i][j]!=-1){
        return t[i][j];
    }
    int ans = INT_MAX;
    for(int k=i;k<=j-1;j++){
        const temp = Solve(arr,i,k) + Solve(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
        ans = min(ans,temp);
    }
    return t[i][j]=ans;
}

