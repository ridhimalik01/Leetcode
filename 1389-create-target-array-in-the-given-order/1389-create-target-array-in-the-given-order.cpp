class Solution {
public:
vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    
   for(int i = 1; i<nums.size(); i++){
    for(int j = i-1; j>=0; j--){
        if(index[j] >= index[i]) index[j]++;
    }
   }

  vector<int> target(nums.size());

  for(int i = 0; i<nums.size(); i++) target[index[i]] = nums[i];
   
   return target;
  }
};