#include<iostream>
using namespace std;
void slection_sort(int *arr,int n)
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
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    slection_sort(arr,n); //Array show reflect value in PASS By Value(funtion) so we don't need to print here 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[]arr;
    return 0;
}