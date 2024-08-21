#include<bits/stdc++.h>
using namespace std;

int RotatedArray(int arr[n],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        int next_elem=(mid+1)%n;
        int prev_elem=(mid+n-1)%n;
        if(arr[mid]<arr[prev_elem] && arr[mid]<arr[next_elem]){
            return mid;
        }else if(arr[start]<=arr[mid]){
            // start=next_elem;
            start=mid+1;
        }else{
            // end=prev_elem;
            end=mid-1;
        }
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

}

/*
int next_elem = (mid + 1) % n;:

This line calculates the index of the element that comes after the middle element in a circular fashion.
mid + 1 gives the index of the next element in a linear sequence.
% n ensures that the index remains within the bounds of the array, even if mid + 1 exceeds n - 1.
This is essential for circular arrays, where the last element is followed by the first.
int prev_elem = (mid + n - 1) % n;:

This line calculates the index of the element that comes before the middle element in a circular fashion.
mid + n - 1 gives the index of the previous element in a linear sequence.
% n ensures that the index remains within the bounds of the array, even if mid + n - 1 is negative.
This is also essential for circular arrays, where the first element precedes the last

*/