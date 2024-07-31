// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<j+i;
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
     	for(int j=i;j<n;j++){
			cout<<" ";
		}
        // values 
        int val=i;
        for(int j=0;j<i;j++){
            cout<<val+j;
        }
        cout<<endl;
    }
}