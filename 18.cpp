class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        if (nums.size()<4){
            return result;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i < nums.size() - 3 &&(long)nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target){
                break;
            }
            if(i>0 && (nums[i] ==nums[i-1])){
                continue;
            }
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1&& (nums[j] == nums[j-1])){
                    continue;
                }
                int left=j+1,right=nums.size()-1;
                while(right>left){
                    if((long)nums[i]+nums[j]+nums[left]+nums[right]>target){
                        right--;
                    }else if((long)nums[i]+nums[j]+nums[left]+nums[right]<target){
                        left++;
                    }else if((long)nums[i]+nums[j]+nums[left]+nums[right]==target){
                        result.push_back(vector<int>{nums[i],nums[j],nums[left],nums[right]});
                        while (right > left && nums[right] == nums[right - 1]) right--;
                        while (right > left && nums[left] == nums[left + 1]) left++;
                        left++;
                        right--;
                    }
                }
            }
        }
        return result;
    }
};