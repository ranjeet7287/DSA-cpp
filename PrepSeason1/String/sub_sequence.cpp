// #include<iostream>
// using namespace std;


// int sub(string input,string *output)
// {
//     if(input.empty())
//     {
//         output[0]="";
//         return 1;
//     }
//     string smallstring=input.substr(1);
//     int small=sub(smallstring,output);
//     for(int i=0;i<small;i++)
//     {
//         output[i+small]=input[0]+output[i];

//     }
//     return 2*small;
// }
// int main()
// {
//     string input;
//     cin>>input;
//     string *output=new string[10000];
//     int count=sub(input,output);
//     for(int i=0;i<count;i++)
//     {
//         cout<<output[i]<<endl;
//     }
// }

#include<iostream>
using namespace std;

int subs(string input,string *output)
{
    if(input.empty())
    {
        output[0]="";
        return 1;
    }
    string subs_string=input.substr(1);
    int small=subs(subs_string,output);
    for(int i=0;i<small;i++)
    {
        output[i+small]=input[0]+output[i];
    }
    return 2*small;
}

int main()
{
    string input;
    cin>>input;
    string *output=new string[1000];
    int count=subs(input,output);
    for(int i=0;i<count;i++)
    {
        cout<<output[i]<<endl;
    }
    delete[]output;
    return 0;
}