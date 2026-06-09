// LeetCode 11 - Sort colors
// Approach: Dutch National Flag Algorithm | Time: O(n) | Space: O(1)


#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {

    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while(mid <= high) {

        // If element is 0
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }

        // If element is 1
        else if(nums[mid] == 1) {
            mid++;
        }

        // If element is 2
        else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {

    vector<int> nums = {2,0,2,1,1,0};

    sortColors(nums);

    for(int x : nums) {
        cout << x << " ";
    }

    return 0;
}