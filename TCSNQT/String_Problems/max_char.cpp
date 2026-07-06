#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str = "takeuforward";
    unordered_map<char,int>freq;
    for(auto ch : str){
        freq[ch]++;
    }
    int Max =1;
    char maxChar;
    for(auto ch : freq){
       if(ch.second>Max){
        Max=ch.second;
        maxChar=ch.first;
       }
    }
    cout<<maxChar;
    return 0;
}