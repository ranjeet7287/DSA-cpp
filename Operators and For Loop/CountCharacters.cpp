#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    int lower=0,num=0,special=0;
    while(c!='$')
    {
        if(c>='0'&&c<='9')
        {
            num++;
            c=cin.get();
        }else if(c>='a'&&c<='z')
        {
            lower++;
            c=cin.get();

        }else{
            special++;
            c=cin.get();
        }
    }
    cout<<lower<<" "<<num<<" "<<special;
}