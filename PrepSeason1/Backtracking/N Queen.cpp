// N-Queen Problem
// Send Feedback
// You are given N, and for a given N x N chessboard, find a way to place N queens such that 
// no queen can attack any other queen on the chess board. A queen can be killed when it lies in 
// the same row, or same column, or the same diagonal of any of the other queens. You have to print
//  all such configurations.
// Note: Don't print anything if there isn't any valid configuration.
// Input Format:
// The first line of input contains an integer, that denotes the value of N.     
// Output Format :
// In the output, you have to print every board configuration in a new line. Every configuration 
// will have N*N board elements printed row wise and are separated by space. The cells where queens 
// are safe and placed, are denoted by value 1 and remaining all cells are denoted by value 0. Please
//  refer to sample test cases for more clarity.
// Constraints :
// 1 <= N <= 10
// Time Limit: 1 second
// Sample Input 1:
// 4
// Sample Output 1 :
// 0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0 
// 0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0 
// Explanation:
// The first and second configuration are shown in the image below. Here, 1 denotes the placement
//  of a queen and 0 denotes an empty cell. Please note that in both the configurations, no pair 
//  of queens can kill each other. 


#include<bits/stdc++.h>
using namespace std;

int bord[11][11];

bool isPossible(int n,int row,int col){
    // same col
    for(int i=row-1;i>=0;i--){
        if(bord[i][col]==1){
            return false;
        }
    }
    // upper left diagonal
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(bord[i][j]==1){
            return false;
        }
    }
    // Upper right diagonal
    for(int i=row-1,j=col+1;j<n && i>=0;i--,j++){
        if(bord[i][j]==1){
            return false;
        }
    }
    return true;

}
void nQueenHelper(int n,int row)
{
    // Base Case
    if(row==n)
    {
        // we have reached some sloution.
        // print the bord matrix
        //  return 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<< bord[i][j]<<" ";
            }
            cout<<endl;
        }
        return;
    }

    // Place at all postion and move to smaller problem
    for(int col=0;col<n;col++)
    {
        if(isPossible(n,row,col)){
            bord[row][col]=1;
            row++;
            nQueenHelper(n,row);
            // backtrack
            bord[row][col]=0;
        }
    }
    return;
}

void palceNQueen(int n)
{
    memset(bord,0,11*11*sizeof(int));
    nQueenHelper(n,0);
}
int main()
{
    palceNQueen(4);
    return 0;
}




// The memset() function in C++ copies a single character for a specified number of time to an object.
// void* memset( void* dest, int ch, size_t count );
// The memset() function takes three arguments: dest, ch and count. The character represented by ch is first 
// converted to unsigned char and then copies it into the first count characters of the object
//  pointed to by dest.
// The behaviour of the function is undefined if:
// The object is not trivially copyable.
// count is greater than the size of dest.
// It is defined in <cstring> header file.