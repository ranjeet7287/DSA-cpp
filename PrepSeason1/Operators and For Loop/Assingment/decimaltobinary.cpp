#include <iostream>
using namespace std;

int main() {
  long int n, binary = 0, remainder, product = 1;
  cin >> n;
  while (n != 0) {
    remainder = n% 2;
    binary = binary + (remainder * product);
    n = n / 2;
    product *= 10;
  }
  cout<< binary ;
  return 0;
}