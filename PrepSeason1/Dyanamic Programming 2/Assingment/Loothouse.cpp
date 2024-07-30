/*
Loot Houses

A thief wants to loot houses. He knows the amount of money in each house. He cannot loot two consecutive houses.
Find the maximum amount of money he can loot.
Input format :
The first line of input contains an integer value of 'n'. It is the total number of houses.

The second line of input contains 'n' integer values separated by a single space denoting the amount
of money each house has.
Output format :
Print the the maximum money that can be looted.
Constraints :
0 <= n <= 10 ^ 4

Time Limit: 1 sec
Sample Input 1 :
6
5 5 10 100 10 5
Sample Output 1 :
110
Sample Input 2 :
6
10 2 30 20 3 50
Sample Output 2 :
90
Explanation of Sample Output 2 :
Looting first, third, and the last houses([10 + 30 + 50]) will result in the maximum loot, and all
the other possible combinations would result in less than 90.
*/
#include<bits/stdc++.h>
using namespace std;

// Dp
int maxMoneyLoot_Dp(int *arr,int n)
{
    int *output=new int[n];
    // fill the first dependency
    output[0]=arr[0];
    if(n>=1){
        output[1]=max(arr[1],output[0]);
    }
    for(int i=2;i<n;i++){
        output[i]=max(output[i-2]+arr[i],output[i-1]);
    }
    int result=output[n-1];
    delete[]output;
    return result;
}


int maxMoneyLootH(int *arr,int i,int n,int *output)
{
    if(i>n){
        return 0;
    }   
    if(output[i]!=-1){
        return output[i];
    }
    int a=maxMoneyLootH(arr,i+2,n,output)+arr[i];
    int b=maxMoneyLootH(arr,i+1,n,output);
    output[i]=max(a,b);
    return output[i];
}
int maxMoneyLoot_mem(int *arr,int n)
{
    int *output=new int[n];
    for(int i=0;i<n;i++){
        output[i]=-1;
    }
    return maxMoneyLootH(arr,0,n,output);
}
int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<maxMoneyLoot_mem(arr,n);
	delete[] arr;
}