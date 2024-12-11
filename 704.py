class Solution:
    def search(self, nums: List[int], target: int) -> int:
        k=len(nums)-1
        l=0
        while(l<=k):
            if(nums[(l+k)//2]>target):
                k=(l+k)//2-1
            elif(nums[(l+k)//2]<target):
                l=(l+k)//2+1
            elif(nums[(l+k)//2]==target):
                return (l+k)//2
        return -1