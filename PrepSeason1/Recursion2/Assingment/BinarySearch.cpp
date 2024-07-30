// Binary Search (Recursive)
// Given an integer sorted array (sorted in increasing order) and an element x, 
// find the x in given array using binary search. Return the index of x.
// Return -1 if x is not present in the given array.
// Note : If given array size is even, take first mid.
// Input format :

// Line 1 : Array size

// Line 2 : Array elements (separated by space)

// Line 3 : x (element to be searched)

// Sample Input :
// 6
// 2 3 4 5 6 8 
// 5 
// Sample Output:
// 3 

// #include<iostream>
// using namespace std;

// int BinarySearch_HELP(int *arr,int start,int end,int x){
//     if(start>end){
//         return -1;
//     }
//     int mid=(start+end)/2;
//     if(arr[mid]==x){
//         return mid;
//     }
//     else if(arr[mid]>x){
//         return BinarySearch_HELP(arr,start,mid-1,x);
//     }
//     else
//     {
//         return BinarySearch_HELP(arr,mid+1,end,x);
//     }
// }
// int BinarySearch(int *arr,int n,int x)
// {
//     int start=0;
//     int end=n-1;
//     int ans=BinarySearch_HELP(arr,start,end,x);
//     return ans;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int *arr=new int[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cin>>x;
//     int ans=BinarySearch(arr,n,x);
//     cout<<ans<<endl;
//     delete[]arr;
//     return 0;
// }