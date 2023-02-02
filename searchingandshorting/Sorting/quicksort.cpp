#include<iostream>
using namespace std;

int partion(int *input,int start,int end)
{
    int c=input[end];
    int i=start-1;
    for(int j=start;j<end-1;j++)
    {
        if(input[j]<c){
            i++;
            swap(&input[i],&input[j])
        }
    }
    
    

}

void quickSort_help(int *input,int start,int end)
{
    if(start>=end){
        return;
    }
    if(start<end)
    {
        int c=partion(input,start,end);
        quickSort_help(input,start,c-1);
        quickSort_help(input,c+1,end);
    }
}

void quickSort(int input[], int size) 
{
    quickSort_help(input,0,size-1);
}

int main()
{
    int n;
    cin >> n;
    int *input = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    delete [] input;
}