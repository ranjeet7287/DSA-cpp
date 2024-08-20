// Ques 1
// Linear Search
#include<iostream>
using namespace std;
int linearSearch(int *arr, int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
// Ques 2 
// 1
// 6
// Sample Output 1 :
// 1 3 5 6 4 2
void arrange(int *arr, int n){
    int s=0;
    int e=n-1;
    int val=1;
    while(s<=e){
        if(val%2==1){
            arr[s]=val;
            val++;
            s++;
        }else{
            arr[e]=val;
            val++;
            e--;
        }
    }
}