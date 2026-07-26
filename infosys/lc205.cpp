#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s = "egg";
    string t = "add";

    unordered_map<char,char>mp1;
    unordered_map<char,char>mp2;

    if(s.size()!=t.size()){
        cout<<"false";
        return 0;
    }

    for(int i =0;i<s.size();i++){
        if(mp1.count(s[i])){
            if(mp1[s[i]]!=t[i]){
                cout<<"false";
                return 0;
            }
        }else{
            mp1[s[i]]=t[i];
        }

        if(mp2.count(t[i])){
            if(mp2[t[i]]!=s[i]){
                cout<<"false";
                return 0;
            }
        }else{
            mp2[t[i]]= s[i];
        }
    }
    cout<<"true";

    return 0;
}