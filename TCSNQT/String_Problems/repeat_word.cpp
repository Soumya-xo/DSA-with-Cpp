#include <iostream>
#include <vector>
#include <algorithm>
#include<sstream>
#include<unordered_map>
using namespace std;

int main() {
    string s= "meta google microsoft";
    stringstream ss(s);
    string ans="";
    int maxRepeat = 1;
    string word;
    while(ss>>word){
        unordered_map<char,int>freq;
        int curMax=1;
        for(char ch : word){
            freq[ch]++;
            curMax=max(curMax,freq[ch]);
        }
        if(curMax>maxRepeat){
            maxRepeat=curMax;
            ans =word;
        }
    }
    if(ans==""){
        cout<<-1;
    }else{
        cout<<ans<<endl;
    }
    return 0;
}