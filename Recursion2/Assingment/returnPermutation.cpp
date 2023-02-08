#include<iostream>
#include<cstring>
using namespace std;

int returnPermutation(string input,string *output)
{
    // Base Case
    if(input.empty()){
        output[0]="";
        return 1;
    }
    int k;
    for(int i=0;input[i]!='\0';i++){
        char c=input[i];
        string output1[1000];
        string small=input.substr(0,i)+input.substr(i+1);
        k=returnPermutation(small,output1);
        for(int j=0;j<k;j++)
        {
            output[j+(k*i)]=c+output1[j];
        }
    }
    int len=input.length();
    return len*k;
}
int main()
{
    string input;
    cin>>input;
    string output[1000];
    int count=returnPermutation(input,output);
    for(int i=0;i<count && i<1000;i++)
    {
        cout<<output[i]<<endl;
    }
    return 0;
}