class Solution {
public:
    void reverseString(vector<char>& s) {
        int p=0,q=s.size()-1;
        while(p<q){
            char tmp=s[p];
            s[p]=s[q];
            s[q]=tmp;
            p++;
            q--;
        }
    }
};