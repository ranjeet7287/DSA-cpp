#include<iostream>
using namespace std;
void doubleValue(int a) 
{
    a = a * 2;
}
int main() {
    int a = 8;
    doubleValue(a);
    cout << a;
}
// 8