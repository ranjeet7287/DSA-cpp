#include<iostream>
using namespace std;

void Removex(char *arr)
{
    if(arr[0]=='\0')
    {
        return ;
    }
    if(arr[0]!='x')
    {
        Removex(arr+1);
    }else{
        int i=1;
        for(;arr[i]!='\0';i++)
        {
            arr[i-1]=arr[i];
        }
        arr[i-1]=arr[i];
        Removex(arr);
    }
}

int main()
{
    char arr[100];
    cin>>arr;

    Removex(arr);
    cout<<arr<<endl;
    return 0;
}