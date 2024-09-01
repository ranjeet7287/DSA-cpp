// Search in Row and Column Wise in Sorted 2D matrix
#include<bits/stdc++.h>
using namespace std;
int searchTwoDArr(int [][]matrix,int key){
    int n=matrix.size();
    int m=matrix[0].size();
    int i=0;
    int j=m-1;
    pair<int,int> ans;
    while(i>=0 && i<n && j>=0 && j<m){
        if(arr[i][j]==key){
            ans.first=i;
            ans.second=j;
            return ans;
        }else if(arr[i][j]>key){
            j--;
        }else{
            i++;
        }
    }
    return -1;
}