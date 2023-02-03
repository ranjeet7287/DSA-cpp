#include<iostream>
using namespace std;

int partion(int *arr,int start,int end)
{
    int x=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++)
    {
        if(arr[i]<=x)
        {
            count++;;
        }
    }
    int x_index=count+start;
    arr[start]=arr[x_index];
    arr[x_index]=x;

    int i=start;
    int j=end;
    while(i<x_index && j>x_index)
    {
        if(arr[i]<=x){
            i++;
        }else if(arr[j]>x)
        {
            j--;
        }else{
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    return x_index; 

}
void quicksort(int *arr,int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int p=partion(arr,start,end);
    quicksort(arr,start,p-1);
    quicksort(arr,p+1,end);
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quicksort(input,0,n-1);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


