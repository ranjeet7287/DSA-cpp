// input-->abcd
//output--> a
//          ab
//          abc
//          abcd
#include<iostream>
#include<cstring>
using namespace std;
void printAllpreffix(char *input)
{
    // i reprsent end index of my preffix
    for(int i=0;input[i]!='\0';i++)
    {
        // j reprsent start index of my preffix
        for(int j=0;j<=i;j++)
        {
            cout<<input[j];
        }
        cout<<endl;
    }
}
int main()
{
    char input[100]="abcd";
    printAllpreffix(input);
}