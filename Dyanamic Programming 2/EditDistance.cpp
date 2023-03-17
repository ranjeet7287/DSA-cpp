/*
Code : Edit Distance
Send Feedback
Given two strings s and t of lengths m and n respectively, find the edit distance between the strings.
Edit Distance
Edit Distance of two strings is minimum number of operations required to make one string equal to other. In order to do so you can perform any of the following three operations only :
1. Delete a character
2. Replace a character with another one
3. Insert a character
Note
Strings don't contain spaces
You need to find the edit distance from input string1 to input string2.
Input Format :
The first line of input contains a string, that denotes the value of s. The following line contains a string, that denotes the value of t.
Output Format :
The first and only line of output contains the edit distance value between the given strings.
Constraints :
1<= m,n <= 10
Time Limit: 1 second
Sample Input 1 :
abc
dc
Sample Output 1 :
2
*/
#include<bits/stdc++.h>
using namespace std;

// Edit Distance
int EditDist_DP(string s,string t)
{
    int m=s.size();
    int n=t.size();
    int **output=new int*[m+1];
    for(int i=0;i<=m;i++){
        output[i]=new int[n+1];
    }
    // fill 1st row
    for(int i=0;i<=n;i++){
        output[0][i]=i;
    }
    // fill 1st col
    for(int i=0;i<=n;i++){
        output[i][0]=i;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            // first char
            if(s[m-i]==t[n-j]){
                output[i][j]=output[i-1][j-1];
            }else{
                int a=output[i-1][j];
                int b=output[i][j-1];
                int c=output[i-1][j-1];
                output[i][j]=min(a,min(b,c))+1;
            }
        }
    }
    return output[m][n];

} 


// Memoization
int EditDist_memH(string s,string t,int **output)
{
    int m=s.size();
    int n=t.size();
    if(s.size()==0 || t.size()==0){
        return max(s.size(),t.size());
    }
    // check if output already exists
    if(output[m][n]!=-1){
        return output[m][n];
    }
    int ans;
    if(s[0]==t[0]){
        ans=EditDist_memH(s.substr(1),t.substr(1),output);
    }else{
    int a=EditDist_memH(s.substr(1),t,output)+1;
    int b=EditDist_memH(s,t.substr(1),output)+1;
    int c=EditDist_memH(s.substr(1),t.substr(1),output)+1;
    ans=min(a,min(b,c));
    }
    output[m][n]=ans;
    return output[m][n];
}

int EditDist_mem(string s,string t)
{
    int m=s.size();
    int n=t.size();
    int **ans=new int*[m+1];
    for(int i=0;i<=m;i++){
        ans[i]=new int[n+1];
        for(int j=0;j<=n;j++){
            ans[i][j]=-1;
        }
    }
    return EditDist_memH(s,t,ans);
}


// Brute Force
int EditDistance(string s,string t)
{
    // Base Case
    if(s.length()==0 || t.length()==0){
        return max(s.size(),t.size());
    }
    if(s[0]==t[0]){
        return EditDistance(s.substr(1),t.substr(1));
    }
    // Insert
    int x=EditDistance(s.substr(1),t)+1;
    // Delete
    int y=EditDistance(s,t.substr(1))+1;
    // Replace
    int z=EditDistance(s.substr(1),t.substr(1))+1;
    return min(x,min(y,z));
}
int main()
{
    string s,t;
    cin>>s>>t;
    cout<<EditDist_DP(s,t);
    return 0;
}