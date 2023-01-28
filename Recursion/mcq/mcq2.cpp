#include <iostream>
using namespace std;

void print(int n){
    if(n < 0){
        return;
    }
    if(n == 0){
        cout << n <<" ";
        return;
    }
    print(n --);
    cout << n << " ";
}

int main() {
    int num = 3;
    print(num);
}

/*
Solution Description
In function print when recursion call is being made  n-- is being passed as input. 
Here we are using post decrement operator, so argument passed to next function call is n and not n - 1.
Thus there will be infinite recursion calls and runtime error will come.
*/