/*
Column Wise Sum
Send Feedback
Given a 2D integer array of size M*N,
find and print the sum of ith column elements separated by space.
Input Format :
First and only line of input contains M and N, followed by M * N space separated integers representing the elements in the 2D array.
Output Format :
Sum of every ith column elements (separated by space)
Constraints :
1 <= M, N <= 10^3
Sample Input :
4 2 1 2 3 4 5 6 7 8
Sample Output :
16 20
*/
#include<iostream>
using namespace std;
int main()
{
    int a[1000][1000];
    int M,N;
    cin>>M>>N;
    for(int j=0;j<M;j++){
        for(int i=0;i<N;i++){
            cin>>a[j][i];
        }
    }
    int i=0;
    while(i<N){
        int j=0;
        int sum=0;
        while(j<M){
            sum=sum+a[j][i];
            j++;
        }
        cout<<sum<<" ";
        i++;
    }
}