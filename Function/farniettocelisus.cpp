#include<iostream>
using namespace std;
void printTable(int start, int end, int step) {
   int c=0;
   while(start<=end)
   {
    c=(start-32)*5.0/9;
    cout<<start<<" "<<c<<endl;
    start+=step;
   }
}
int main()
{
    int S,W,E;
    cin>>S>>W>>E;
    printTable(S,E,W);
}