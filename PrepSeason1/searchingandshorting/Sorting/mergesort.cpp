// Merge Sort Code

// Sort an array A using Merge Sort.
// Change in the input array itself. So no need to return or print anything.
// Input format :
// Line 1 : Integer n i.e. Array size
// Line 2 : Array elements (separated by space)
// Output format :
// Array elements in increasing order (separated by space)
// Constraints :
// 1 <= n <= 10^3
// Sample Input 1 :
// 6 
// 2 6 8 5 4 3
// Sample Output 1 :
// 2 3 4 5 6 8
// Sample Input 2 :
// 5
// 2 1 5 2 3
// Sample Output 2 :
// 1 2 2 3 5 


// #include<iostream>
// using namespace std;

// void merge(int *arr1,int size1,int *arr2,int size2,int *arr)
// {
//     int i=0,j=0,q=0;
//     while(i<size1 && j<size2)
//     {
//         if(arr1[i]<arr2[j]){
//             arr[q]=arr1[i];
//             q++;
//             i++;
//         }else{
//             arr[q]=arr2[j];
//             q++;
//             j++;
//         }
//     }
//     while(i<size1)
//     {
//         arr[q]=arr1[i];
//         i++;
//         q++;
//     }
//     while(j<size2)
//     {
//         arr[q]=arr2[j];
//         q++;
//         j++;
//     }
// }



// void Mergesort(int *arr,int n)
// {
//     if(n<1)
//     {
//         return;
//     }
//     int mid=n/2;
//     int size1=mid;
//     int size2=n-mid;

//     int *arr1=new int[size1];
//     int *arr2=new int[size2];
//     for(int i=0;i<mid;i++){
//         arr1[i]=arr[i];
//     }
//     int k=0;
//     for(int i=mid;i<n;i++){
//         arr[k]=arr[i];
//         k++;
//     }
//     Mergesort(arr1,size1);
//     Mergesort(arr2,size2);

//     merge(arr1,size1,arr2,size2,arr);

//     delete[]arr1;
//     delete[]arr2;
// }


// int main()
// {
//     int n;
//     cin>>n;
//     int *arr=new int[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     Mergesort(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     delete[]arr;
//     return 0;
// }





#include <iostream>
using namespace std;

void merge(int *arr1,int *arr2,int size1,int size2,int *arr)
{
    int i=0,j=0,q=0;
    while(i<size1 &&  j<size2){
        if(arr1[i]<arr2[j]){
            arr[q]=arr1[i];
            i++;
            q++;
        }else{
            arr[q]=arr2[j];
            q++;
            j++;
        }
    }
    while(i<size1){
        arr[q]=arr1[i];
        i++;
        q++;
    }
    while(j<size2){
        arr[q]=arr2[j];
        j++;
        q++;
    }
}
void mergeSort(int arr[], int n){
        if(n<=1){
        return;
    }
    int mid=n/2;
    int size1=mid;
    int size2=n-mid;
    int *arr1=new int[size1];
    int *arr2=new int[size2];
    for(int i=0;i<mid;i++){
        arr1[i]=arr[i];
    }
    int k=0;
    for(int j=mid;j<n;j++){
        arr2[k]=arr[j];
        k++;
    }
    mergeSort(arr1,size1);
    mergeSort(arr2,size2);
    merge(arr1,arr2, size1, size2,arr);
    delete[]arr1;
    delete[]arr2;
        
}


int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}