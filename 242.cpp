class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>s2t;
        if (s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            s2t[s[i]]++;
        }
        for(int j=0;j<s.size();j++){
            s2t[t[j]]--;
        }
        for(auto a=s2t.begin();a!=s2t.end();++a){
            if(a->second != 0){
                return false;
            }
        }
        return true;
    }
};