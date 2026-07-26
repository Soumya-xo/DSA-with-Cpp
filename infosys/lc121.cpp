// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int>arr = {7,1,5,3,6,4};

//     int minPrice = INT_MAX;
//     int maxProfit = 0;

//     for(int i = 0;i<arr.size();i++){
//         minPrice = min(minPrice,arr[i]);
//         maxProfit = max(maxProfit,arr[i]-minPrice);
//     }

//     cout<<maxProfit<<endl;
//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>arr = {7,1,5,3,6,4};
    
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(auto val : arr){
        minPrice = min(minPrice,val);
        maxProfit= max(maxProfit,val-minPrice);
    }

    cout<<maxProfit<<endl;
    return 0;
}