class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> a(n);
        iota(a.begin(), a.end(), 1);
        int current_position = 0;
        
        while (n > 1) {
            current_position = (current_position + (k - 1)) % n;
            a.erase(a.begin() + current_position);
            n--;
        }
        
        return a[0];
    }
};
