#include<iostream>
using namespace std;

void reverse_arry(char *input)
{
    int len=0;
    for(int i=0;input[i]!='\0';i++)
    {
        len++;
    }
    int start=0;
    int end=len-1;
    while(start<end)
    {
        int temp=input[start];
        input[start]=input[end];
        input[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    char arr[100];
    cin.getline(arr,100);
    reverse_arry(arr);
    cout<<arr;
    return 0;
}