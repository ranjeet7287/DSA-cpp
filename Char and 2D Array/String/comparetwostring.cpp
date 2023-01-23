// Campare two string
//  it return 0-->means Equal string or non-zero Value--> Not Equal
// strcmp(input1,input2);


#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char input1[100] , input2[100];
    cin>>input1>>input2;
    if(strcmp(input1,input2)==0)
    {
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
}