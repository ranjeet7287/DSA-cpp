/*
Approch to Solve Sudoku 
1.Find empty postion on bord if  postion is not empty it means sudoku is filled then we have to 
  return our sloution.
2.Start putting number from 1 to 9 by checking this condtion
                     :-> 1.Number is not present in Row.
                         2. Number is not present in Column.
                         3.Number is not present in 3*3 Box.
    if all this condtion satisfy it means we have put our number at that empty postion.
3.Call the function again. 
*/

#include<bits/stdc++.h>
using namespace std;
#define N 9
bool FindEmptyLocation(int grid[N][N],int &row,int &col){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(grid[i][j]==0){
                row=i;
                col=j;
                return true;
            }
        }
    }
    return false;
}
bool isSafeRow(int grid[N][N],int row,int num){
    for(int i=0;i<N;i++){
        if(grid[row][i]==num){
            return false;
        }
    }
    return true;
}
bool isSafeCol(int grid[N][N],int col,int num){
    for(int i=0;i<N;i++){
        if(grid[i][col]==num){
            return false;
        }
    }
    return true;
}
bool isSafeBox(int grid[N][N],int row,int col,int num){
    
    int rowfactor=row-(row%3);
    int colfactor=col-(col%3);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(grid[i+rowfactor][j+colfactor]==num){
                return false;
            }
        }
    }
    return true;
}
bool isSafe(int grid[N][N] ,int row,int col,int num){
  if(isSafeRow(grid,row,num) && isSafeCol(grid,col,num) && isSafeBox(grid,row,col,num)){
    return true;
  }
  return false;
}
void SolveSudoku(int grid[N][N]){
    int row,col;
    if(!FindEmptyLocation(grid,row,col)){
        return true;
    }
    for(int i=1;i<=9;i++){
        if(isSafe(grid,row,col,i)){
            grid[row][col]=i;
            if(SolveSudoku(grid)){
                return true;
            }else{
                grid[row][col]=0;
            }
        }
    }
    return false;
}
int main()
{
    int grid[N][N];
    for(int i=0;i<N;i++){
        string s;
        cin>>s;
        for(int j=0;j<s.length();j++){
            grid[i][j]=s[j] - '0';
        }
    }
    SolveSudoku(grid);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}