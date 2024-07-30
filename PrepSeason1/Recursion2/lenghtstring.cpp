#include<iostream>
using namespace std;

int lenght_str(char *str)
{
    if(str[0] =='\0')
    {
        return 0;
    }
    int small=lenght_str(str+1);
    return small+1;
}

int main()
{
    char str[100];
    cin>>str;
    int len=lenght_str(str);
    cout<<len<<endl;
    return 0;
}