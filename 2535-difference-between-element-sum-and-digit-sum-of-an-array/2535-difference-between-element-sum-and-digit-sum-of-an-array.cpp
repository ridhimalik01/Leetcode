class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element_sum = 0;
        int digit_sum = 0;
        for(int i=0;i<nums.size();i++){
            element_sum+=nums[i];
            int val = nums[i];
            int x;
            while(val>0){
                x = val%10;
                digit_sum +=x;
                val = val/10;
            }
        }
        return abs(element_sum - digit_sum);
    }
};