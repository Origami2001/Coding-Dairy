class Solution {
public:
    string removeDuplicates(string s) {
        string t;
        for(char ch:s){
            if(!t.empty()&&(t.back()==ch)){
                t.pop_back();
            }else{
                t.push_back(ch);
            }
        }
        return t;
    }
};