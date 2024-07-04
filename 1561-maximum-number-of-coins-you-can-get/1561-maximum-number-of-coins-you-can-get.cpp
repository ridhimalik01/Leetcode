class Solution {
public:
    int maxCoins(vector<int>& piles) 
    {
        sort(rbegin(piles), rend(piles));
        int ans = 0, i = 1, n = piles.size();
        while(i <= n - (n/3))
            ans += piles[i], i += 2;
        return ans;
    }
};