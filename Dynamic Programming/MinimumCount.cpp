/*
Code : Minimum Count
Given an integer N, find and return the count of minimum numbers required to represent
N as a sum of squares.
That is, if N is 4, then we can represent it as : {1^2 + 1^2 + 1^2 + 1^2} and {2^2}. 
The output will be 1, as 1 is the minimum count of numbers required to represent N 
as sum of squares.
Input format :
The first and the only line of input contains an integer value, 'N'.
 Output format :
Print the minimum count of numbers required.
Constraints :
0 <= n <= 10 ^ 4

Time Limit: 1 sec
Sample Input 1 :
12
Sample Output 1 :
3
Explanation of Sample Output 1 :
12 can be represented as : 
A) (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2)

B) (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2) + (1^2)  + (2 ^ 2)

C) (1^2) + (1^2) + (1^2) + (1^2) + (2 ^ 2) + (2 ^ 2)

D) (2 ^ 2) + (2 ^ 2) + (2 ^ 2)

As we can see, the output should be 3.
Sample Input 2 :
9
Sample Output 2 :
1
*/
#include<bits/stdc++.h>
using namespace std;
int MinCount(int n)
{
    if(n<=2){
        return n;
    }
    int *ans=new int[n+1];
    ans[0]=0;
    ans[1]=1;
    ans[2]=2;
    for(int i=3;i<=n;i++){
        int min_v=n;
        for(int j=1;j*j<=i;j++){
            min_v=min(min_v,ans[i-(j*j)]);
        }
        ans[i]=min_v+1;
    }
    int output=ans[n];
    delete[]ans;
    return output;
}
int main()
{

}


