class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> nums,replica;
        vector<int> result;
        for(int i=0;i<nums1.size();i++){
            nums[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++){
            if(replica[nums2[j]]==0&&nums[nums2[j]]!=0){
                result.push_back(nums2[j]);
            }
            replica[nums2[j]]++;
        }
        return result;
    }
};