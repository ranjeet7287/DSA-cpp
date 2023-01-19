#include<iostream>
using namespace std;

int main(){
int N,n,n1;
bool b=true;
cin>>N;
cin>>n;
int i=1,c=0,e=0;

while(i<=N-1){
cin>>n1;
if(n==n1){
c=1;
}
else if(n1>n){
b=false;
}
else
{
if(b==false)
c=1;
e=1;
}
i++;
n=n1;
}
if(c==1)
cout<<"false";
else if(!b && e==0)
cout<<"true";
else if(e==1 && !b)
cout<<"true";
else{
cout<<"true";
}
}