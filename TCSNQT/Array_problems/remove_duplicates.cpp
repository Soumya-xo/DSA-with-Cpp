//Remove Duplicates from a sorted array
//TC = o(n)
//SC = o(n)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<char> newArray(vector<int>&arr){
//     int n = arr.size();
//     vector<char> ans;
//     for(int i =1;i<=arr[n-1];i++){
//         ans.push_back('0'+i);
//     }
//     for(int i =1;i<=n-arr[n-1];i++){
//         ans.push_back('_');
//     }
//     return ans;
// }

// int main() {
//     vector<int> arr = {1,1,2,2,3,3,3};
//     vector<char>arr2 = newArray(arr);
//     for(auto val: arr2){
//         cout<< val;
//     }
//     cout<<endl;
//     return 0;
// }



// Remove duplicates without place _ ther
//TC = o(n)
//Sc = o(1)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int unique(vector<int>&arr){
   
//     int i =0;
//     for(int j =1;j<arr.size();j++){
//         if(arr[i]!=arr[j]){
//             i++;
//             arr[i] = arr[j];
//         }

//     }
//     return i+1;
// }

// int main() {
//     vector<int> arr = {1,1,2,2,3,3,3};
//     int x = unique(arr);
//     for(int i =1; i<=x;i++){
//         cout<< i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



//Remove Duplicates from unsorted arr;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> newArr(vector<int>&arr){
    unordered_map<int, bool> seen;
    vector<int>ans;

    for(auto val : arr){
        if(!seen[val]){
            ans.push_back(val);
            seen[val]=true;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {4,5,4,2,2,3,1};
    vector<int> ans = newArr(arr);
    for(auto val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}