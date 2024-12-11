class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        i=0
        k=len(nums)-1
        ans=[0]*len(nums)
        j=len(nums)-1
        while(i<=k):
            if(abs(nums[i]-0))>=(abs(nums[k]-0)):
                ans[j]=nums[i]*nums[i]
                i=i+1
            elif(abs(nums[i]-0))<(abs(nums[k]-0)):
                ans[j]=nums[k]*nums[k]
                k=k-1
            j=j-1
        return ans