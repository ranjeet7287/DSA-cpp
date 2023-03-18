/*
All possible ways
Send Feedback
Given two integers a and b. You need to find and return the count of possible ways in which we can represent the number a as the sum of unique integers raise to the power b.
For example: if a = 10 and b = 2, only way to represent 10 as sum of unique integers raised to power 2 is-
10 = 1^2 + 3^2 
Hence, answer is 1.
Note : x^y represents x raise to the power y
Input Format:
The first line of input contains two space separated integers, that denote the value of a and b.
Output Format:
The first and only line of output contains count of ways in which a can be represented as sum of unique integers raised to power b.
Constraints :
1 <= a <= 10^4
1 < b <= 20
Time Limit: 1 second
Sample Input 1 :
10 2
Sample Output 1 :
1
Sample Input 2 :
100 2
Sample Output 2 :
3
Explanation:
Following are the three ways: 
1. 100 = 10^2
2. 100 = 8^2 + 6^2
3. 100 = 7^2+5^2+4^2+3^2+1^2

Approach to be followed:
A good approach to this problem is to use recursive backtracking.
Points to keep in mind:
● Each term has to be strictly greater than the previous term, so we always start checking
from the previous number plus one. (At the very beginning, we start at 1.)
● We backtrack if the sum of the current expression exceeds “a”, since adding more terms
will just increase the sum even further.
● We only go deeper if the current sum so far is strictly smaller than “a”.
● On the (rare) occasion that we get a sum of exactly “a”, it means we've found a solution!
This also means that we should backtrack (since adding more terms will just increase
the sum).

Example:
For the example - a=10, b=2.
● Try 1 first. Our expression currently looks like 1
2=1. The next number must be >=2.
○ Try 2. Now it looks like 1
2+2
2=5. The next number must be greater than >=3.
■ Try 3. Now sum is 1
2+2
2+3
2=14. Backtrack, since it exceeds 10.
○ Try 3. We have 1
2+3
2=10. We have found a solution.
● Try 2. We have 2
2=4.
○ Try 3. 2
2+3
2=13. Backtrack, since it exceeds 10.
● Try 3. We have 3
2=9.
○ Try 4. 3
2+4
2=25. Backtrack, since it exceeds 10.
● Try 5. 5
2=25. Backtrack, since it exceeds 10.
After the last backtrack, the enumeration ends.
*/
#include<bits/stdc++.h>
using namespace  std;
int getAllWays_b(int a,int b,int current_num,int current_sum)
{
    int count=0;
    int p=pow(current_num,b);
    while(p+current_sum < a)
    {
        count+=getAllWays_b(a,b,current_num+1,current_sum+p);
        current_num++;
        p=pow(current_num,b);
    }
    if(p+current_sum==a){
        count++;
    }
    return count;
}
int getAllWays(int a, int b)
{
    return getAllWays_b(a,b,1,0);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << getAllWays(a, b);
}