#include<iostream>
using namespace std;

int lenght_of_string(char *input)
{
    int len=0;
    for(int i=0;input[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
int main()
{
    char arr[100];
    cin>>arr;
    cout<<"Lenght of string : "<<lenght_of_string(arr);
}