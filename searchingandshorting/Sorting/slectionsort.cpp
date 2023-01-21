#include<iostream>
using namespace std;

void Selction_sort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=arr[i],min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                min_index=j;
            }
        }
        //Swaping 
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    } 
}

int main()
{
   int arr[]={7,6,5,4,3,2,1};
   Selction_sort(arr,7);
   for(int i=0;i<7;i++)
   {
    cout<<arr[i]<<" ";
   }
   return 0;
}