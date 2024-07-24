class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int N = deck.size();
        vector<int> result(N);
        bool skip = false;
        int iInDeck = 0;
        int iInResult = 0;

        sort(deck.begin(), deck.end());

        while (iInDeck < N) {
            if (result[iInResult] == 0) {
                if (!skip) {
                    result[iInResult] = deck[iInDeck];
                    iInDeck++;
                }
                skip = !skip;
            }
            iInResult = (iInResult + 1) % N;
        }
        return result;
    }
};