class Solution {
public:
    int getNumOfBouquets(vector<int>& bloomDay, int mid, int k) {
            int countk=0;
            int countb=0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) {
                countk++;
            } else {
                countk = 0;
            }

            if (countk == k) {
                countb++;
                countk = 0;
            }
        }

        return countb;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int start = 0;
        int end = 0;
        for (int day : bloomDay) {
            end = max(end, day);
        }

        int minDays = -1;
        while (start <= end) {
            int mid = (start + end) / 2;

            if (getNumOfBouquets(bloomDay, mid, k) >= m) {
                minDays = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return minDays;
    }
       
};