// Ques 1

// Void pointer can point to which type of objects ?
// Ans-> ALL TYPE OF DATATYPE.


// -----------------------------------------------------------------------------------------

// Ques 2

// int main()
// {
//         int d = 65;
//         int i = d;
//         char ch = i;
//         cout << ch << endl;
// }

// Ans --> A

// ---------------------------------------------------------------------------------


// Ques 3

#include <iostream>
using namespace std;
void updateValue(int *p){
    *p = 610 % 255;
}

int main(){
    char ch = 'A';
    char *pt = &ch;
    updateValue((int*)pt);
    cout << ch;
}

// d