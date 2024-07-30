#include<iostream>
using namespace std;


void print_sub(string input,string output)
{
    // Base case
    if(input.empty()){
        cout<<output<<endl;
        return;
    }
    print_sub(input.substr(1),output);
    print_sub(input.substr(1),output+input[0]);
}
int main()
{
    string input;
    cin>>input;
    string output="";
    print_sub(input,output);
    
}