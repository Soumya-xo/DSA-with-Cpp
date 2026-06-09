/*
Problem: Majority Element
Technique: Moore's voting Algo
DS Used: Vector
TC: O(n)
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums={3,2,3};
    int freq=0;
    int ans=0;
    for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<ans<<endl;
    return 0;
}