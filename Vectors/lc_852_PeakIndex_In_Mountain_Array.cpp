// LeetCode 11 - Peak INdex In Mountain Array
// Approach: Binary Search | Time: O(logn) | Space: O(1)

#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {

    int st = 1;
    int end = arr.size() - 2;

    while(st <= end) {

        int mid = st + (end - st) / 2;

        // Peak element found
        if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
            return mid;
        }

        // Increasing slope
        if(arr[mid - 1] < arr[mid]) {
            st = mid + 1;
        }

        // Decreasing slope
        else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {

    vector<int> arr = {0,2,4,6,8,5,3,1};

    cout << peakIndexInMountainArray(arr);

    return 0;
}