#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main() {
    string s = "cbacdcbc";
    map<char,int>freq;

    for(auto ch : s){
        freq[ch]++;
    }

    for(auto ch : s){
        if(freq[ch]!=0){
            cout<<ch;
            freq[ch]=0;
        }
    }

    return 0;
}