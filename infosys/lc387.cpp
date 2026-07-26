#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s = "leetcode";

    vector<int>freq(26,0);
    for(auto ch : s){
        freq[ch-'a']++;
    }

    for(int i =0;i<s.size();i++){
        if(freq[s[i]-'a']==1){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}