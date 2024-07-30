#include<iostream>
using namespace std;
int main()
{
    char b[] = "xyz";
    char *c = &b[0];
    cout << c << endl;
    // xyz
}
// Solution Description
// c stores the address of start of array
//  b (and not of it’s values). So the entire array is printed when c is printed.