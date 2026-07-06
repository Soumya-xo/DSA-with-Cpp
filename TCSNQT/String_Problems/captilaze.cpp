#include <iostream>
#include <vector>
#include <algorithm>
#include<sstream>
using namespace std;

int main() {
    string s = "take you forward is awesome";
    stringstream ss(s);
    string word;
    
    string ans;
    while(ss>>word){
        word[0]=toupper(word[0]);
        word[word.size()-1]=toupper(word[word.size()-1]);
        ans+=word + " ";
    }

    cout<<ans;

    return 0;
}