#include<iostream>
using namespace std;


int main(){
	int S,E,W;
	cin>>S>>E>>W;
	for(int i=S;i<=E;i=i+W){
        int f = (5 * (i - 32)) / 9;
        cout<<i<<" "<<f<<endl;
	}  
}


