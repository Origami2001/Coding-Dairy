class Solution {
public:
    vector<string> result;
    void track(string& s,int start,int times){
        if(times==3){
            if(isvalid(s, start, s.size()-1)){
                result.push_back(s);
            }
            return;
        }
        for(int i=start;i<s.size();i++){
            if(isvalid(s, start, i)){
                s.insert(s.begin()+1+i,'.');
                times++;
                track(s, i+2, times);
                times--;
                s.erase(s.begin()+1+i);
            }
        }
    }
    bool isvalid(string& s,int begin, int end){
        if(begin>end)return false;
        if(s[begin]=='0'&& begin!=end) return false;
        int num=0;
        for(int i=begin;i<=end;i++){
            if(s[i]>'9'||s[i]<'0'){return false;}
            num=num*10+(s[i]-'0');
            if(num>255){return false;}
        }
        return true;
    }

    vector<string> restoreIpAddresses(string s) {
        if(s.size()<4||s.size()>12) {return result;}
        track(s,0,0);
        return result;
    }
};