// Count the occurance of angrams
#include<bits/stdc++.h>
using namespace std;

int CountAnagrams(string pat,string txt){
    int k = pat.length();
    int n = txt.size();
    //  counting pattern char
    unordered_map<char, int> mpat;
    for (int i = 0; i < k; i++) {
        mpat[pat[i]]++;
    }
    //  storing unique element size in count
    int cnt = mpat.size();
    // ans store occurence of anagrams  i and j is initialization val
    int ans = 0, i = 0, j = 0;
    while (j < n) {
        // calculation
        //  searching pattern in txt 
        if (mpat.find(txt[j]) != mpat.end()) {
            // if found dec the occ
            mpat[txt[j]]--;
            // if occ is 0 in map then dec. cnt of unique ele
            if (mpat[txt[j]] == 0) {
                cnt--;
            }
        }
        // Window Expansion
        if (j - i + 1 < k) {
            j++;
        }
        else if (j - i + 1 == k) {
            // pattern  match found 
            if (cnt == 0) {
                ans++;
            }
            //remove prev calc
            if (mpat.find(txt[i]) != mpat.end()) {
                mpat[txt[i]]++;
                if (mpat[txt[i]] == 1) {
                    cnt++;
                }
            }
            i++;
            j++;
        }
    }
    return ans;
}


int main(){

}