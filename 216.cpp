class Solution {
public:
    void tracking(int k,int n,vector<vector<int>>& result,vector<int>& path,int sum,int start){
        if(path.size()==k){
            if(sum==n){
                result.push_back(path);
            }
        }
        for(int i=start;i<=9;i++){
            sum+=i;
            path.push_back(i);
            tracking(k, n, result, path, sum, i+1);
            path.pop_back();
            sum-=i;
        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> path;
        result.clear();path.clear();
        tracking(k,n,result,path,0,1);
        return result;
    }
};