#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s = "google";
    unordered_map<char,int>freq;
    for(auto ch : s){
        freq[ch]++;
    }
    for(auto ch : freq){
        if(ch.second==1){
           cout<<ch.first;
        }
    }
    return 0;
}
