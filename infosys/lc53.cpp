// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int>arr = {-2,1,-3,4,-1,2,1,-5,4};

//     int curSum =arr[0];
//     int maxSum =arr[0];

//     for(int i =1;i<arr.size();i++){
//         curSum = max(arr[i],curSum+arr[i]);
//         maxSum = max(curSum,maxSum);
//     }

//     cout<<maxSum<<endl;
//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>arr = {-2,1,-3,4,-1,2,1,-5,4};
    int curSum =arr[0];
    int maxSum = arr[0];

    for(auto val : arr){
        curSum = max(curSum+val, val);
        maxSum = max(curSum , maxSum);
    }

    cout<<maxSum<<endl;

    return 0;
}