// Reverse Each Word
// Send Feedback
// Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.
// Example:
// Input Sentence: "Hello, I am Aadil!"
// The expected output will print, ",olleH I ma !lidaA".
// Input Format:
// The first and only line of input contains a string without any leading and trailing spaces. The input string represents the sentence given to Aadil.
// Output Format:
// The only line of output prints the sentence(string) such that each word in the sentence is reversed. 
// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the input string.
// Time Limit: 1 second
// Sample Input 1:
// Welcome to Coding Ninjas
// Sample Output 1:
// emocleW ot gnidoC sajniN
// Sample Input 2:
// Always indent your code
// Sample Output 2:
// syawlA tnedni ruoy edoc

#include <iostream>
#include <cstring>
using namespace std;
void reverseEachWord(char input[])
{
    int k;
    int len=strlen(input);
    int i=0;
    int j=len-1;
    for(int i = 0, j =0; i < len; i++) {
        if(input[i]==' ' || i == len-1){
        if(i < len-1) {
            k = i - 1;
        }else{
            k = i;
        }
        while (k > j)
        {
         int temp  = input[j];
         input[j] = input[k];
         input[k] = temp;
         j++;
         k--;
        }
      j = i + 1;
    }
    }
}
int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}

