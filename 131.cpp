class Solution {
public:
    vector<string> path;
    vector<vector<string>> result;
    void track(string& s,int start){
        if(start>=s.size()){
            result.push_back(path);
            return;
        }
        for(int i=start;i<s.size();i++){
            if(isreverse(s, start, i)){
                string str=s.substr(start,i-start+1);
                path.push_back(str);
            }else{continue;}
            track(s, i+1);
            path.pop_back();
        }
    }
    bool isreverse(string& s,int begin,int end){
        for(int m=begin,n=end;m<n;m++,n--){
           if(s[m]!=s[n]){
            return false;
           }
        }return true;
    }

    vector<vector<string>> partition(string s) {
        track(s,0);
        return result;
    }
};