class Solution {
public:
vector<vector<int>> result;
vector<int> path;
    void tracking(int n,int k,int startindex){
        if(path.size()==k){
            result.push_back(path);
            return;
        }
        for(int i=startindex;i<=n;i++){
            path.push_back(i);
            tracking(n, k, i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
       tracking(n, k, 1);
       return result;
    }
};