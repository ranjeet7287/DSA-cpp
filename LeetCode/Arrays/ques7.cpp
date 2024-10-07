// 48. Rotate Image

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = m;

    // Transpose of a matrix
    for(int i=0;i<m;i++){
        for(int j =i;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // Reverse a matrix
    for(int i=0;i<m;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    
}

int main(){

}