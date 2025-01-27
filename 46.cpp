class Solution {
public:
    void tracking(vector<int>& nums, vector<bool>& used,vector<int>& path,vector<vector<int>>& result){
        if(path.size()==nums.size()){
            result.push_back(path);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]==true) continue;
            used[i]=true;
            path.push_back(nums[i]);
            tracking(nums, used, path, result);
            path.pop_back();
            used[i]=false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> path;
        result.clear();path.clear();
        vector<bool> used(nums.size(),false);
        tracking(nums,used,path,result);
        return result;
    }
};