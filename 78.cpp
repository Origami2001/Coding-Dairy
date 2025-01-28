class Solution {
public:
    vector<int> path;
    vector<vector<int>> result;
    void track(vector<int>& nums,int start){
        result.push_back(path);
        if(start>=nums.size()){
            return;
        }
        for(int i=start;i<nums.size();i++){
            path.push_back(nums[i]);
            track(nums, i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        track(nums,0);
        return result;
    }
};