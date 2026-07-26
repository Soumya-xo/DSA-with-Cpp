#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string r ="aa";
    string m= "aab";

    int freq[26]={0};

    for(auto ch : m){
        freq[ch-'a']++;
    }

    for(auto ch : r){
        if(freq[ch-'a']==0){
            cout<<"false";
            return 0;
        }
        freq[ch-'a']--;
    }
    cout<<"true";

    return 0;
}