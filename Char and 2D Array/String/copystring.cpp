// strcpy(destination_strig,source_string);
// a='rajeet';
// b='singh';
// strcpy(a,b); (a will copy the value of b) ;
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr1[100]="ranjeet";
    char arr2[100]="singh";

    strcpy(arr1,arr2);
    cout<<arr1; //singh
}
// One More variation which is 
// strncpy(destination_strig,source_string,n);
// n-->length of source_string 