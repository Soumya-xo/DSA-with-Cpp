// LeetCode 11 - Single Element In Sorted Array
// Approach: Binary Serach | Time: O(log n) | Space: O(1)


#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {

    int st = 0;
    int end = nums.size() - 1;

    while(st < end) {

        int mid = st + (end - st) / 2;

        // make mid even
        if(mid % 2 == 1) {
            mid--;
        }

        if(nums[mid] == nums[mid + 1]) {
            st = mid + 2;
        }
        else {
            end = mid;
        }
    }

    return nums[st];
}

int main() {

    vector<int> nums = {1,1,2,2,3,4,4,5,5};

    cout << singleNonDuplicate(nums);

    return 0;
}