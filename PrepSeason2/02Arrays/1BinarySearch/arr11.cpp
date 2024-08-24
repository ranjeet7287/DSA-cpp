// Find the postion of an element in a infinte sorted array 
#include<bits/stdc++.h>
using namespace std;

int EndIndex(int arr[],int x){
    int start = 0;
    int end = 1;
    while(x>=arr[end]){
        start=end;
        end = end*2;
    }
    return end;
 }


int main(){
    int n;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int endindex = EndIndex(arr,x); 
    //  Abb simple hai start pata hai end pata hai simple binary sereach laga do
}