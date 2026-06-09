// LeetCode 11 - Search In Rotated Sorted Array
// Approach: Binary Search | Time: O(logn) | Space: O(1)


#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {

    int st = 0;
    int end = nums.size() - 1;

    while(st <= end) {

        int mid = st + (end - st) / 2;

        if(nums[mid] == target) {
            return mid;
        }

        // Left side sorted
        if(nums[st] <= nums[mid]) {

            if(target >= nums[st] && target < nums[mid]) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        // Right side sorted
        else {

            if(target > nums[mid] && target <= nums[end]) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {

    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;

    cout << search(nums, target);

    return 0;
}