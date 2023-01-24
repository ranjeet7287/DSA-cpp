#include<iostream>
using namespace std;
void swap (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}

int main()
{
   char *x = "ninjasquiz";
   char *y = "codingninjas";
   char *t;
   swap(x, y);
   cout<<x << " "<<y;
   t = x;
   x = y;
   y = t; 
   cout<<" "<<x<< " "<<y;
   //ninjasquiz codingninjas codingninjas ninjasquiz 
   return 0;
}
// Note: On executing this code, a warning will
//  appear: "ISO C++ forbids converting a string constant into 'char*'. " 
// Ignore the warning and then print the expected output.