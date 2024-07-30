#include<iostream>
using namespace std;


// int arr[]--> effectively it's pointer
// int sum(int arr[],int size)
// {
//     cout<<sizeof(arr)<<endl;
// }

// arr[] --> *arr ;
int sum(int *arr,int size)
{
   int sum=0;
   for(int i=0;i<size;i++)
   {
    sum +=arr[i];
   }
   return sum;
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<sizeof(arr)<<endl;
    cout<<sum(arr,10)<<endl; // full array

    cout<<sum(arr+3,7)<<endl; // part of an array we can also pass  
}

