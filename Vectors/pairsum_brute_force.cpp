/*
Problem: Find pair sum
DS Used: Vector
TC: O(n^2)
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> pairsum(vector<int> nums,int target){
    vector<int> ans;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums={1,2,3,4,5};
    int target=5;
    vector<int> ans=pairsum(nums,target);
    cout<<ans[0]<<ans[1]<<endl; 

    return 0;
}