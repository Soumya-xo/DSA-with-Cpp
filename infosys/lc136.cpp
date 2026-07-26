#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>arr = {2,2,1};

    unordered_map<int,int>freq;

    for(auto val:arr){
        freq[val]++;
    }

    for(auto val :freq){
        if(val.second==1){
            cout<<val.first<<endl;
        }
    }
    return 0;
}