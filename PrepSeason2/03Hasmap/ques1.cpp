// LeetCode 2225. Find Players With Zero or One Losses

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches) {

    unordered_map<int,int> lost_map;
    map.clear();

    for(int i=0;i<matches.size();i++){
        int looser = matches[i][1];
        lost_map[looser]++;
    }

    vector<int> not_lost;
    vector<int> lost_once;

    for(int i=0;i<matches.size();i++){
        int winner = matches[i][0];
        int looser = matches[i][1];

        // not included in map
        if(lost_map.find(winner)==lost_map.end()){
            not_lost.push_back(winner);
            // so that it take only once
            lost_map[winner]=2;
        }

        // include only once has value 1 
        if(lost_map[looser]==1){
            lost_once.push_back(looser);
        }

    }

    sort(begin(not_lost),end(not_lost));
    sort(begin(lost_once),end(lost_once));
    return {not_lost,lost_once};
}

int main(){

}

/*
matches = [    {1, 3},    {2, 3},    {4, 5},    {6, 4},    {2, 5}]
This means:

Player 1 wins against Player 3.
Player 2 wins against Player 3.
Player 4 wins against Player 5.
Player 6 wins against Player 4.
Player 2 wins against Player 5.
We want to find:

Players who have never lost a match.
Players who have lost exactly one match.
Step-by-Step Dry Run
Initialization
unordered_map<int, int> lost_map;:
This will store the number of losses for each player.
vector<int> not_lost; and vector<int> lost_once;:
These vectors will store players with zero losses and exactly one loss, respectively.
First Loop: Count Losses
cpp
Copy code
for (int i = 0; i < matches.size(); i++) {
    int looser = matches[i][1];
    lost_map[looser]++;
}
We iterate over each match to count the losses of each player.

1st Iteration (match = {1, 3}):

looser = 3
lost_map[3] = 1 → Player 3 has 1 loss.
2nd Iteration (match = {2, 3}):

looser = 3
lost_map[3] = 2 → Player 3 now has 2 losses.
3rd Iteration (match = {4, 5}):

looser = 5
lost_map[5] = 1 → Player 5 has 1 loss.
4th Iteration (match = {6, 4}):

looser = 4
lost_map[4] = 1 → Player 4 has 1 loss.
5th Iteration (match = {2, 5}):

looser = 5
lost_map[5] = 2 → Player 5 now has 2 losses.
lost_map after the first loop:

arduino
Copy code
{
    3: 2,   // Player 3 has 2 losses.
    5: 2,   // Player 5 has 2 losses.
    4: 1    // Player 4 has 1 loss.
}
Second Loop: Find Players with Zero or One Loss
cpp
Copy code
for (int i = 0; i < matches.size(); i++) {
    int winner = matches[i][0];
    int looser = matches[i][1];

    if (lost_map.find(winner) == lost_map.end()) {
        not_lost.push_back(winner);
        lost_map[winner] = 2;
    }

    if (lost_map[looser] == 1) {
        lost_once.push_back(looser);
    }
}
We iterate again to find players who have never lost and those who have lost exactly once.

1st Iteration (match = {1, 3}):

winner = 1, looser = 3
lost_map.find(1) == lost_map.end() → True, so:
not_lost.push_back(1); → Player 1 has no losses.
lost_map[1] = 2; → Marked as processed with 2 (not a real loss count, just to indicate it has been added).
2nd Iteration (match = {2, 3}):

winner = 2, looser = 3
lost_map.find(2) == lost_map.end() → True, so:
not_lost.push_back(2); → Player 2 has no losses.
lost_map[2] = 2; → Marked as processed with 2.
3rd Iteration (match = {4, 5}):

winner = 4, looser = 5
lost_map.find(4) != lost_map.end() → False, since 4 is in lost_map with value 1.
lost_map[5] == 1 → False, since lost_map[5] is 2, so no action on lost_once.
4th Iteration (match = {6, 4}):

winner = 6, looser = 4
lost_map.find(6) == lost_map.end() → True, so:
not_lost.push_back(6); → Player 6 has no losses.
lost_map[6] = 2; → Marked as processed with 2.
lost_map[4] == 1 → True, so:
lost_once.push_back(4); → Player 4 has exactly one loss.
5th Iteration (match = {2, 5}):

winner = 2, looser = 5
lost_map.find(2) != lost_map.end() → False, since lost_map[2] = 2.
lost_map[5] == 1 → False, since lost_map[5] = 2.
not_lost vector:

csharp
Copy code
[1, 2, 6]
Players 1, 2, and 6 have not lost any matches.
lost_once vector:

csharp
Copy code
[4]
Player 4 has lost exactly one match.
Sorting and Returning the Result
cpp
Copy code
sort(begin(not_lost), end(not_lost));
sort(begin(lost_once), end(lost_once));
return {not_lost, lost_once};
Sorting not_lost and lost_once:
not_lost: [1, 2, 6] (already sorted).
lost_once: [4] (already sorted).
Final Result:

cpp
Copy code
{
    {1, 2, 6}, // Players with zero losses
    {4}        // Players with one loss
}


*/