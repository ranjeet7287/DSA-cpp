/*
Code : Knapsack

A thief robbing a store can carry a maximal weight of W into his knapsack. 
There are N items, and i-th item weigh 'Wi' and the value being 'Vi.'
 What would be the maximum value V, that the thief can steal?
Input Format :
The first line of the input contains an integer value N, which denotes the 
total number of items.

The second line of input contains the N number of weights separated by a single space.

The third line of input contains the N number of values separated by a single space.

The fourth line of the input contains an integer value W, which denotes the
 maximum weight the thief can steal.
Output Format :
Print the maximum value of V that the thief can steal.
Constraints :
1 <= N <= 20
1<= Wi <= 100
1 <= Vi <= 100

Time Limit: 1 sec
Sample Input 1 :
4
1 2 4 5
5 4 8 6
5
Sample Output 1 :
13
Sample Input 2 :
5
12 7 11 8 9
24 13 23 15 16
26
Sample Output 2 :
51
*/
#include <bits/stdc++.h>
using namespace std;




// Memoization
int knapSack_mem(int *weight,int *value,int n,int maxweight,int *output)
{
  
    // Base Case
    if(n==0 || maxweight==0){
        return 0;
    }
    // cal
    int ans;
    if(weight[0]>maxweight){
        ans=knapsack(weight+1,value+1,n-1,maxweight);
    }else{
    // Recursion
    int x=knapsack(weight+1,value+1,n-1,maxweight-weight[0]+value[0]);
    int y=knapsack(weight+1,value+1,n-1,maxweight);
    ans=max(x,y);
    }
    output[n][maxweight]=ans;
    return ans;
}
int knapSack_mem(int *weight,int *value,int n,int maxweight)
{

    int **output=new int*[n+1];
    for(int i=0;i<=n;i++){
        output[i]=new int[maxweight+1];
        for(int j=0;j<=maxweight;j++){
            output[i][j]=-1;
        }
    }
    int ans=knapSack_mem(weight,value,n,maxweight,output);
    for(int i=0;i<=n;i++){
        delete[]output[i];
    }
    delete[]output;
    return ans;
}





// Brute Force
int knapsack(int *weight,int *value,int n,int maxweight)
{
    // Base Case
    if(n==0 || maxweight==0){
        return 0;
    }
    // cal
    if(weight[0]>maxweight){
        return knapsack(weight+1,value+1,n-1,maxweight);
    }
    // Recursion
    int x=knapsack(weight+1,value+1,n-1,maxweight-weight[0]+value[0]);
    int y=knapsack(weight+1,value+1,n-1,maxweight);
    return max(x,y);
}

int main()
{
	int n;
	cin >> n;
	int *weights = new int[n];
	int *values = new int[n];
	for (int i = 0; i < n; i++){
		cin >> weights[i];
	}
	for (int i = 0; i < n; i++){
		cin >> values[i];
	}
	int maxWeight;
	cin >> maxWeight;
	cout << knapsack(weights, values, n, maxWeight) << endl;
	delete[] weights;
	delete[] values;
}