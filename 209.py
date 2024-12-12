class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        i,j,result=0,0,0
        output=len(nums)+1
        while(j<len(nums) and i<=j):
            result+=nums[j]
            j+=1
            while(result>=target):
                output=min(output, j-i)
                result-=nums[i]
                i+=1
        if output<=len(nums):
            return output
        else:
            return 0
        