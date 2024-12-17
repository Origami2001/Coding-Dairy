class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length()>magazine.length()){
            return false;
        }
        unordered_map<char,int> u_m;

        for(auto ch:magazine){
            ++u_m[ch];
        }

        for(auto ch:ransomNote){
            if(u_m[ch]==0){
                return false;
            }
            --u_m[ch];
        }
        return true;
    }
};