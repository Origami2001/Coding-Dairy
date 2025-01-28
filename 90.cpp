class Solution {
public:
    vector<int> path;
    vector<vector<int>> result;
    void track(vector<int> nums,int start, vector<bool>& used){
        result.push_back(path);
        for(int i=start;i<nums.size();i++){
            if(i>0&& nums[i]==nums[i-1] && used[i-1]==false){
                continue;
            }
            path.push_back(nums[i]);
            used[i]=true;
            track(nums, i+1,used);
            used[i]=false;
            path.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<bool> used(nums.size(),false);
        track(nums, 0, used);
        return result;
    }
};