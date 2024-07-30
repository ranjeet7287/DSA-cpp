#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int sumeven=0;
    int sumodd=0;
    int i;
    while(n>0){
        i=n%10;
        if(i%2==0){
            sumeven+=i;
        }else{
            sumodd+=i;
        }n=n/10;
    }cout<<sumeven<<" "<<sumodd;
    
	
}