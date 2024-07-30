#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;

int balancedBST(int h)
{
    if(h==1){
        return 1;
    }
    if(h==2){
        return 3;
    }
    int *ans=new int[h+1];
    ans[1]=1;
    ans[2]=3;
    for(int i=3;i<=h;i++){
        int x=(int)(((long long)ans[i-1]*ans[i-1])%m);
        int y=(int)((2*(long long)ans[i-1]*ans[i-2])%m);
        ans[i]=(int)(((long long)x+y)%m);
    }
    int result=ans[h];
    delete[]ans;
    return result;
}

int main(){
    int h;
    cin>>h;
    cout<<balancedBST(h);
}




















// #include<bits/stdc++.h>
// using namespace std;
// // Brute Force
// int balancedBST(int h)
// {
//     if(h<=1){
//         return 1;
//     }
//     int mod =(int)(pow(10,9))+7;
//     int x=balancedBST(h-1);  
//     int y=balancedBST(h-2);
//     int temp1=(int)(((long)(x)*x) % mod);
//     int temp2=(int)(((2*(long)(x)*y)) % mod);
//     int ans=(temp1+temp2) % mod;
//     return ans;
// }
// int main()
// {
//     int h;
//     cin>>h;
//     cout<<balancedBST(h);
// }