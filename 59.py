class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        left,top,right,bottom=0,0,n-1,n-1
        num=1
        result=[[0]*n for _ in range(n)]
        while top<=bottom and left<=right:
            for i in range(left,right+1):
                result[top][i]=num
                num+=1
            top+=1
            for j in range(top,bottom+1):
                result[j][right]=num
                num+=1
            right-=1
            if top<=bottom:
                for i in range(right,left-1,-1):
                    result[bottom][i]=num
                    num+=1
                bottom-=1
            if left<=right:
                for j in range(bottom,top-1,-1):
                    result[j][left]=num
                    num+=1
                left+=1
        return result