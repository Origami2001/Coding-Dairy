class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2==1){
            return false;
        }
        unordered_map<char,char> seem;
        seem[')']='(';
        seem[']']='[';
        seem['}']='{';
        stack<char> ii;
        for(char ch:s){
            if(seem.count(ch)){
                if(ii.empty()||ii.top()!=seem[ch]){
                    return false;
                }
                ii.pop();
            }
            else{
                ii.push(ch);
            }
        }
        return ii.empty();

    }
};