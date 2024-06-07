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
