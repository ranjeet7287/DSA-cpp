// Rat in a Maze Problem
#include<bits/stdc++.h>
using namespace std;

struct Choice{
    char dir_name;
    int dx,dy;
}

bool isSolved(int x,int y,int n){
    return x==n-1 && y==n-1;
}

bool isValid(int x,int y,int n,int arr){
    // unbounded // blocked // non-reapting
    return x > =0 && x<n && y>=0 && y<n && arr[x][y]==1; 
}

void solve(int x,int y,int n,vector<string> &res,string &path,vector<vector<int>> &arr,vector<Choice> &choice){

    // base
    if(isSolved(x,y,n)){
        res.push_back(path);
        return;
    }

    for(const auto &choice : choice){
        int newX = x + choice.dx;
        int newY = y + choice.dy;
        if(isValid(newX,newY,n,arr)){
            // mark the current cell as visited cell in arr
            arr[x][y] = 0;
            path.push_back(choice.dir_name);
            solve(newX,newY,res,path,arr,choice);
            // Restore the original value in arr
            // revert the changes
            arr[x][y] = 1;
            path.pop_back();
        }
    }


}

vector<string> findPath(vector<vector<int>> &arr,int n){
    vector<string> res;
    string path = '';
    vector<Choice> choice ={{'U',-1,0},{'D',1,0},{'L',1,0},{'R',0,1}};

    if(arr[0][0]==1){
        solve(0,0,n,res,path,arr,choice);
    }
    return res;
}

int main(){

}