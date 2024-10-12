#include <iostream>
using namespace std;
int main()
{
  int arr[] = {4, 5, 6, 7};
  int *p = (arr + 1);
  cout<< *p<<endl;
  cout << *arr + 9; //(*arr-->arr[0])  (4+9-->13)
  return 0;
}