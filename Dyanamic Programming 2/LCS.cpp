#include<bits/stdc++.h>
using namespace std;

// Dp
int LCS_Dp(string s,string t)
{
    int m=s.size();
    int n=t.size();
    int **output=new int*[m+1];
    for(int i=0;i<=m;i++){
        output[i]=new int[n+1];
    }
    // fill the Dependeies
    // fill 1st row
    for(int i=0;i<=n;i++){
        output[0][i]=0;
    }
    // fill 1st col
    for(int j=1;j<=m;j++){
        output[j][0]=0;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            // check if 1st char matches
            if(s[m-i]==t[n-j]){
                output[i][j]=1+output[i-1][j-1];
            }else{
                int a=output[i-1][j];
                int b=output[i][j-1];
                int c=output[i-1][j-1];
                output[i][j]=max(a,max(b,c));
            }
        }
    }
    return output[m][n];
}
// Memoization
int LCS_memH(string s,string t,int **output)
{
    int m=s.size();
    int n=t.size();

    if(s.length()==0 || t.length()==0){
        return 0;
    }
    // check if ans is already calculation
    if(output[m][n]!=-1){
        return output[m][n];
    }


    //Recursive call
    // When first charchater matches
    int ans;
    if(s[0]==t[0]){
        ans= 1+LCS_memH(s.substr(1),t.substr(1),output);
    }else{
    // When first charchater does'nt matches

        int a =LCS_memH(s.substr(1),t,output);
        int b=LCS_memH(s,t.substr(1),output);
        // Redunant call we can remove this call it does not affect our code
        int c=LCS_memH(s.substr(1),t.substr(1),output);
        ans =max(a,max(b,c));
    }
    // Save your calculation
    output[m][n]=ans;
    return output[m][n];
}


int LCS_mem(string s,string t){
    int m=s.size();
    int n=t.size();
    int **output=new int*[m+1];
    for(int i=0;i<=m;i++){
        output[i]=new int[n+1];
        for(int j=0;j<=n;j++){
            output[i][j]=-1;
        }
    }
    return LCS_memH(s,t,output);
}

// Brute Force
// 3^n
int LCS(string S,string T)
{
    // Base Case
    if(S.length()==0 || T.length()==0){
        return 0;
    }
    //Recursive call
    // When first charchater matches
    if(S[0]==T[0]){
        return 1+LCS(S.substr(1),T.substr(1));
    }
    // When first charchater does'nt matches
    int a =LCS(S.substr(1),T);
    int b=LCS(S,T.substr(1));
    int c=LCS(S.substr(1),T.substr(1));
    return max(a,max(b,c));
}
int main()
{
    string S,T;
    cin>>S>>T;
    cout<<LCS_Dp(S,T)<<endl; 
}