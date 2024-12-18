#include<iostream>
#include<string>
using namespace std;

string replace(string s){
    string result;
    for(char c:s){
        if(c>='0'&&c<='9'){
            result+="number";
        }else{
            result+=c;
        }
    }
    return result;
}

int main(){
    string s;
    cin>>s;
    cout<<replace(s)<<endl;
    return 0;
}