/*
Code : Min Cost Path
An integer matrix of size (M x N) has been given. Find out the minimum cost to reach from the 
cell (0, 0) to (M - 1, N - 1).
From a cell (i, j), you can move in three directions:
1. ((i + 1),  j) which is, "down"
2. (i, (j + 1)) which is, "to the right"
3. ((i+1), (j+1)) which is, "to the diagonal"
The cost of a path is defined as the sum of each cell's values through which the route passes.
Input format :
The first line of the test case contains two integer values, 'M' and 'N', separated by a single space. 
They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

The second line onwards, the next 'M' lines or rows represent the ith row values.

Each of the ith row constitutes 'N' column values separated by a single space.
Output format :
Print the minimum cost to reach the destination.
Constraints :
1 <= M <= 10 ^ 2
1 <= N <=  10 ^ 2

Time Limit: 1 sec
Sample Input 1 :
3 4
3 4 1 2
2 1 8 9
4 7 8 1
Sample Output 1 :
13
Sample Input 2 :
3 4
10 6 9 0
-23 8 9 90
-200 0 89 200
Sample Output 2 :
76
Sample Input 3 :
5 6
9 6 0 12 90 1
2 7 8 5 78 6
1 6 0 5 10 -4 
9 6 2 -10 7 4
10 -2 0 5 5 7
Sample Output 3 :
18
*/

#include<bits/stdc++.h>
using namespace std;


// Dp
int mincostpath(int **arr,int m,int n){
    int **output=new int*[m];
    for(int i=0;i<m;i++){
        output[i]=new int[n];
    }
    // fill the last cell i.e -> destination 
    output[m-1][n-1]=arr[m-1][n-1];

    // fill  last row right to left manner
    for(int j=n-2;j>=0;j--){
        output[m-1][j]=output[m-1][j+1]+arr[m-1][j]; 
    }

    // fill Last col bottom to top
    for(int i=m-2;i>=0;i--){
        output[i][n-1]=output[i+1][n-1]+arr[i][n-1];
    }

    // fill remaining cell
    for(int i=m-2;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            output[i][j]=min(output[i][j+1],min(output[i+1][j+1],output[i+1][j]))+arr[i][j];
        }
    }
    return output[0][0];   
}

// Meomoization
int MinCostPath(int **arr,int m,int n,int i,int j,int **output)
{
    if(i==m-1 && j==n-1){
        return arr[i][j];
    }
    if(i>=m || j>=n){
        return INT_MAX;
    }
     // Check ans is already exists
    if(output[i][j]!=-1){
        return output[i][j];
    }
    int x=MinCostPath(arr,m,n,i,j+1,output);
    int y=MinCostPath(arr,m,n,i+1,j+1,output);
    int z=MinCostPath(arr,n,m,i+1,j,output);

    int a=min(x,min(y,z))+arr[i][j];
    output[i][j]=a;
    return a;
}

int MinCostPath(int **arr,int n,int m)
{
    int **output=new int*[n];
    for(int i=0;i<n;i++){
        output[i]=new int[m];
        for(int j=0;j<m;j++){
            output[i][j]=-1;
        }
    }
    MinCostPath(arr,n,m,0,0,output);
}



// Brute force
int MinCostPathH(int **arr,int n,int m,int i,int j)
{
    // Base Case
    if(i==m-1 && j==n-1){
        return arr[i][j];
    }
    if(i>=m || j>=n){
        return INT_MAX;
    }
    // Recrursive call 
    int x=MinCostPathH(arr,m,n,i,j+1);
    int y=MinCostPathH(arr,m,n,i+1,j+1);
    int z=MinCostPathH(arr,n,m,i+1,j);
    // small calculation
    int ans=min(x,min(y,z))+arr[i][j];
    return ans;
}

int MinCostPath(int **arr,int n,int m)
{
    return MinCostPathH(arr,n,m,0,0);
}

int main()
{
    int n,m;
    cin>>n>>m;
    int **arr;
    arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<MinCostPath(arr,n,m)<<endl;
}