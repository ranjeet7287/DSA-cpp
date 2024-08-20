#include<bits/stdc++.h>
using namespace std;

void intersection(int *arr1, int *arr2, int n1, int n2){
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j]=-1;
                break;
            }
        }
    }
}

int main(){
    
}