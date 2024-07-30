#include <iostream>
using namespace std;
int main()
{   
    int x = 15;
    int y = x++; // first x print(15) then x increment(16)
    int z = ++x; // first x increment(17) then x print (17) 
    cout <<y<<" "<< z;
}
// ans -> 15 17