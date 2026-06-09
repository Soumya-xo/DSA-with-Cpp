// LeetCode 1672 - Richest Customer Wealth
// Approach: Iterative Traversal with Accumulation | Time: O(n × m), where n = number of customers,
//  m = number of banks per customer | Space: O(1)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for (int i = 0; i < accounts.size(); i++) {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }
            maxWealth = max(maxWealth, sum);
        }

        return maxWealth;
    }
};

int main() {
    Solution sol;

    // sample input
    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1}
    };

    // function call
    cout << sol.maximumWealth(accounts) << endl;

    return 0;
}