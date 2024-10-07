// 11. Container With Most Water

#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();
    int i = 0,j=n-1;
    int maxwater = 0;
    
    while(i<j){
        int width = j-i;
        int hei = min(height[i],height[j]);

        int area = width * hei;
        maxwater = max(maxwater,area);

        if(height[i] > height[j]){
            j--;
        }else{
            i++;
        }
    }

    return maxwater;
}


int main(){

}