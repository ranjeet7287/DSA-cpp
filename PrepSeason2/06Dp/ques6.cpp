// Count the number of subset with a given difference
#include<bits/stdc++.h>
using namespace std;


int CountNoSumOfSubset(int arr[],int n ,int s1){
    int  t[n+1][s1+1];

    if(n==0 || s1 ==0){
        return 0;
    }

    for(int i=0;i<n+1;i++){
        for(int j=0;j<s1+1;j++){
            if(i==0){
                t[i][j]=0;
            }
            if(j==0){
                t[i][j]=1;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<s1+1;j++){
            if(arr[i-1]<j){
                t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    return t[n][s1];
}


int CountDifference(int *arr,int n , int diff){
    //  s1  + s2 = sum[arr] 
    //  s1  - s2 = diff 
    //  s1       = diff + sum[arr]/2

    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int s1 = (diff + sum ) /2;

    CountNoSumOfSubset(arr,n,s1);
 }


int main(){
    

}