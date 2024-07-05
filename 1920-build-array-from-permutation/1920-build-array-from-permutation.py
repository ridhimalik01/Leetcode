class Solution(object):
    def buildArray(self, nums):
        i=0
        ans=[0] * len(nums)
        while i <len(nums):
            ans[i]=nums[nums[i]]
            i+=1
        return ans