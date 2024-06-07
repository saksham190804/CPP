// Batting average in cricket is a statistical measure that reflects a batsman's performance. It is calculated by dividing the total number of runs scored by the number of times the batsman has been dismissed. A higher batting average indicates consistent and effective batting, while a lower average suggests room for improvement. It is a key metric used to assess a player's contribution to the team's overall performance with the bat.

// We are given with an array in which ith  index shows runs scored by batsmen in ith inning. Also you are given integer notOut which shows in how many innings the batsmen was notout.

 

// Constraints:

// 0<=i<=1000

// notOut<=i+1




class Solution {
public:
    float calculateBattingAverage(vector<int>& runs, int notOut) {
        int totalRuns = 0;
        int totalInnings = runs.size();

        for (int i = 0; i < runs.size(); i++) {
            totalRuns += runs[i];
        }
        if(totalInnings == notOut) return totalRuns;
        float dismissals=totalInnings - notOut;
        float battingAverage = totalRuns / dismissals;

        return battingAverage;
    }
};




// Input: runs = [100, 10, 90, 40, 60] , notOut = 2
// Output: 100

// Input: runs = [45, 70, 88, 71, 0, 100, 35], notOut = 1
// Output: 68.1667
