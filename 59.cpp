class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top=0,bottom=n-1,left=0,right=n-1;
        vector<vector<int>> result(n, vector<int>(n));
        int num=1;
        while(top<=bottom&&left<=right){
            for(int i=left;i<=right;i++){
                result[top][i]=num;
                num++;
            }
            top++;
            for(int j=top;j<=bottom;j++){
                result[j][right]=num;
                num++;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    result[bottom][i]=num;
                    num++;
                }
            }
            bottom--;
            if(left<=right){
                for(int j=bottom;j>=top;j--){
                    result[j][left]=num;
                    num++;
                }
            }
            left++;
        }
        return result;
    }
};