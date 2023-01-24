//Pointer are variables which store address of other variable .
// ex  ---> datatype i;
// Syntax--> datatype * name = &i;
#include<iostream>
using namespace std;
int main()
{
    int j=1;
    // address of j  --> &j
    cout<<&j<<endl; //0x61ff0c in Hexadecimal value 

    int i=1;
    int *p=&i;
    cout<<p<<endl;  // 0x61ff04 p store the adress of i .
    cout<<&i<<endl; // 0x61ff04 printing address of i .

}