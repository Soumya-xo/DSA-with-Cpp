#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>nums = {1,2,3,1};
    int k =3;

    unordered_map<int,int>mp;

    for(int i =0;i<nums.size();i++){
        if(mp.find(nums[i])!=mp.end()){
            if(i-mp[nums[i]]<=k){
                cout<<"true";
                return 0;
            }
        }
        mp[nums[i]]=i;
    }
    cout<<"false"<<endl;
    return 0;
}