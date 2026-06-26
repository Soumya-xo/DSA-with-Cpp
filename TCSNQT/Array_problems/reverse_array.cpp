//brute force
// TC = o(n)
//SC = o(n)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<int> reverseArray(vector<int> & arr){
//     vector<int>arr2;
//     for(int i = arr.size()-1;i>=0;i--){
//         arr2.push_back(arr[i]);
//     }
//     return arr2;
// }

// int main() {
//     vector<int> arr = {1,2,3,4,5,6};
//     vector<int> arr2 = reverseArray(arr);
//     for(auto val : arr2){
//         cout<<val<< " ";
//     }
//     cout<< endl;
//     return 0;
// }



//Better approach
//Tc = o(n)
//Sc = o(1)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<int> reverseArray(vector<int>&arr){
//     int l =0;
//     int r = arr.size()-1;
//     while(l<r){
//         swap(arr[l],arr[r]);
//         l++;
//         r--;
//     }
//     return arr;
// }

// int main() {
//     vector<int> arr = {1,2,3,4,5,6};
//     reverseArray(arr);
//     for(auto val : arr){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



//Use builtin function
//TC = o(n)
//Sc = o(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>reverseArray(vector<int> & arr){
    reverse(arr.begin(),arr.end());
    return arr;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6};
    reverseArray(arr);
    for(auto val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}