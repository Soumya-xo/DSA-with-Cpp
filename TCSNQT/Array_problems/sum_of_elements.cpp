//brute force
//Tc = o(n)
//Sc = o(1)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int sum(vector<int>&arr){
//     int ans = arr[0];
//     for(int i =1;i<arr.size();i++){
//         ans+=arr[i];
//     }
//     return ans;
// }

// int main() {
//     vector<int>arr = { 1,2,3,4,55,6};
//     cout<<sum(arr)<<endl;
//     return 0;
// }



//Built in function use
//TC = o(n)
//SC = o(1)


#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>      //need to use accumulate
using namespace std;

int sum(vector<int>&arr){
    return accumulate(arr.begin(),arr.end(),0);
}

int main() {
    vector<int> arr = {1,2,3,4,5,6};
    cout<<sum(arr);
    return 0;
}