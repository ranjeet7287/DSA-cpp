#include<iostream>
using namespace std;

// int a[][] wrong
// int a[][total_no_of_column]

void print(int arr[][100],int r,int c)
{
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
