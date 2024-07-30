#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int basic;
    char grade;
    double totalsalary;
    int allow;
    cin>>basic>>grade;
    if(grade=='A'){
        allow=1700;
    }
    else if(grade=='B'){
        allow=1500;
    }
    else{
        allow=1300;
    }
    totalsalary=basic+0.20*basic+0.50*basic+allow-0.11*basic;
    int output = round(totalsalary);
    cout<<output;
}