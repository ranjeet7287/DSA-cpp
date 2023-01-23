// Reverse Word Wise
// Send Feedback
// Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
// Input format :
// String in a single line
// Output format :
// Word wise reversed string in a single line
// Constraints :
// 0 <= |S| <= 10^7
// where |S| represents the length of string, S.
// Sample Input 1:
// Welcome to Coding Ninjas
// Sample Output 1:
// Ninjas Coding to Welcome
// Sample Input 2:
// Always indent your code
// Sample Output 2:
// code your indent Always


#include <iostream>
using namespace std;
void reverse_word(char *input,int i,int j)
{
    while(i<j)
    {
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
    }
}
void reverseStringWordWise(char input[]) 
{
    //Revrse whole sentence
    int len=0;
    for(int i=0;input[i]!='\0';i++)
    {
        len++;
    }
    int i=0;
    int j=len-1;
    while(i<j)
    {
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
    }
    // Again reverse one by one
    int start=0;
    int end=0;
    for(i=0;i<len;i++)
    {
        if(input[i]==' '){
            end=i-1;
            reverse_word(input,start,end);
            start=i+1;
            end=i+1;
        }
    }
    end=i-1;
    reverse_word(input,start,end);
}
int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
