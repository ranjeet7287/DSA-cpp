#include<iostream>
using namespace std;

int duplicateNumber(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }

}

int main(){
    
}