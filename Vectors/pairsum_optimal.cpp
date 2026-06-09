 /*
 Problem: Find pairsum
 Technique: Two pointer Approach
 DS Used: Vetor
 TC: O(n)
 */


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> pairsum(vector<int> nums,int target){
    vector<int> ans;
    int i=0;
    int j=nums.size()-1;
    while(i<j){
        if(nums[i]+nums[j]>target){
            j--;
        }else if(nums[i]+nums[j]<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
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