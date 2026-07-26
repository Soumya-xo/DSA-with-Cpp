// #include<iostream>
// #include<unordered_map>
// #include<algorithm>
// #include<vector>
// using namespace std;
// class Solution{
// public:
// vector<int>ans(vector<int>&arr,int target){
//     unordered_map<int,int>mp;

//     for(int i =0;i<arr.size();i++){
//         int need = target-arr[i];

//         if(mp.find(need)!=mp.end()){
//             return {mp[need],i};
//         }

//         mp[arr[i]]=i;
//     }
//     return {};

// }
// };

// int main(){
//     vector<int>arr = {2,7,11,15};
//     int target = 9;
//     Solution obj;
//     vector<int>answer=obj.ans(arr,target);

//     for(auto val : answer){
//         cout<<val<<" ";
//     }
//     cout<<endl;

//     return 0;
// }





#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public :
      vector<int> ans(vector<int>& nums, int target){
         unordered_map<int,int>mp;
         for(int i =0;i<nums.size();i++){
            int need = target - nums[i];

            if(mp.find(need)!=mp.end()){
                return {i,mp[need]};
            }
            mp[nums[i]]= i;
         }
         return {-1};
      }
};

int main() {
        vector<int>arr = {2,7,11,15};
    int target = 9;
    Solution obj;
    vector<int>answer=obj.ans(arr,target);

    for(auto val : answer){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}