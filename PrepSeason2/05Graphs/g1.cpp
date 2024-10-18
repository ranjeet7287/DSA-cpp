#include<bits/stdc++.h>
using namespace std;

void print_graph(vector<vector<int>> mat){
    for(int i = 1 ;i<mat.size();i++){
    cout<<"Node"<<i<<"Conected to  : ";
      for(int j = 1 ;j<mat.size();j++){
        if(mat[i][j]==1){
            cout<<j<<" ";
        }
      }
      cout<<endl;
    }
}

int main(){
    vector<vector<int>> edegelist = {
        {1,2},{2,3},{3,4},{4,2},{1,3}
    };

    int n = edegelist.size();
    vector<vector<int>> adjacenyMatrix(5,vector<int>(5,0));
    for(int i = 0;i<n;i++){
        int a = edegelist[i][0] , b = edegelist[i][1];
        adjacenyMatrix[a][b] = 1;
        adjacenyMatrix[b][a] = 1;
    }

    print_graph(adjacenyMatrix);

}