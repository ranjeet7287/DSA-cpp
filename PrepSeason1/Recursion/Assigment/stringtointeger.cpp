#include <iostream>
using namespace std;

#include<cstring>
#include <math.h>
#include <iomanip>
int stringToNumber(char input[])
{
    int len=strlen(input);
    if(len==1)
    {
        return (input[0]-'0');
    }
    double b=input[0]-'0';
    double small=stringToNumber(input+1);
    double ans = b*pow(10,len-1)+small;
    return ans;
    
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
