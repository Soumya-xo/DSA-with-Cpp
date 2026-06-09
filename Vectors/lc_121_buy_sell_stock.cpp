// LeetCode 121 - Best Time to Buy and Sell Stock
// Approach: Greedy | Time: O(n) | Space: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++) {
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit;
}

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter prices:\n";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << "Maximum Profit: " << maxProfit(prices) << endl;

    return 0;
}
