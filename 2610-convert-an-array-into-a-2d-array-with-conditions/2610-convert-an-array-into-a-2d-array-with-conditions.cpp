class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int r = 0;
        for (auto& num : nums) {
            if ((r > 0) && (result[r - 1].back() != num)) r = 0;
            if (r >= result.size()) result.push_back({});
            result[r++].push_back(num);
        }
        return result;
        
    }
};
