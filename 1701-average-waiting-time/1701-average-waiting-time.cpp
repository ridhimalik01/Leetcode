class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int nextTime = 0;
        long long netWaitTime = 0;

        for (int i = 0; i < customers.size(); i++) {
            nextTime = max(customers[i][0], nextTime) + customers[i][1];
            netWaitTime += nextTime - customers[i][0];
        }
        double averageWaitTime =
            static_cast<double>(netWaitTime) / customers.size();
        return averageWaitTime;
    }
};