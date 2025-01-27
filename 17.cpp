class Solution {
public:
    const string lettermap[10]={
        "",//0
        "",//1
        "abc",//2
        "def",//3
        "ghi",//4
        "jkl",//5
        "mno",//6
        "pqrs",//7
        "tuv",//8
        "wxyz",//9
    };
    void tracking(const string& digits,vector<string>& result,string s,int index){
        if(index==digits.size()){
            result.push_back(s);
            return;
        }
        int digit=digits[index]-'0';
        string letters = lettermap[digit];
        for(int i=0;i<letters.size();i++){
            s.push_back(letters[i]);
            tracking(digits, result, s, index+1);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        string s;
        result.clear();s.clear();
        if(digits.empty()){return result;}
        tracking(digits,result,s,0);
        return result;
    }
};