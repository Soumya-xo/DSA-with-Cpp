#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> newArr(vector<int>&arr){
    unordered_map<int,int> mp;
    vector<int>ans;
    for(auto val: arr){
        mp[val]++;
    }
    for(auto val : mp){
        if(val.second==1){
            ans.push_back(val.first);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
    vector<int> arr = {1,1,0};
    vector<int>ans = newArr(arr);
    for(auto val: ans){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}