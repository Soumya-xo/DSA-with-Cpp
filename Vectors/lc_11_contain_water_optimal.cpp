// LeetCode 11 - Container With Most Water
// Approach: Two pointer Approach | Time: O(n) | Space: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int maxWater = 0;

    while (left < right) {
        int width = right - left;
        int h = min(height[left], height[right]);
        int area = width * h;

        maxWater = max(maxWater, area);

        // move the pointer with smaller height
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
}

int main() {
    int n;
    cout << "Enter number of lines: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter heights:\n";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    cout << "Maximum Water: " << maxArea(height) << endl;

    return 0;
}
