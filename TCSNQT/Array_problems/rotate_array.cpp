//brute force
//Tc = o(n)
//Sc = o(1)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution{
// public:    

// vector<int>leftRotate(vector<int>&arr,int k){
//     vector<int>arr2;
//     for(int i = k;i<arr.size();i++){
//         arr2.push_back(arr[i]);
//     }
//     for(int i=0;i<k;i++){
//         arr2.push_back(arr[i]);
//     }
//     return arr2;

// }

// vector<int>rightRotate(vector<int>&arr,int k){
//     vector<int>arr3;
//     for(int i = arr.size()-k;i<arr.size();i++){
//         arr3.push_back(arr[i]);
//     }
//     for(int i=0;i<=k;i++){
//         arr3.push_back(arr[i]);
//     }
//     return arr3;

// }
// };
// int main() {
//     vector<int>arr = {1, 2, 3, 4, 5};
//     int K = 2;
//     Solution obj;
//     vector<int> arr2 = obj.leftRotate(arr,K);
//     for(auto val : arr2){
//         cout<<val<<" ";
//     }
//     cout<<endl;

//     vector<int> arr3 = obj.rightRotate(arr,K);
//     for(auto val : arr3){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


//optimal
//Tc = o(n)
//Sc = o(1)


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>leftrotate(vector<int>&arr, int k){

    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());

    return arr;

}

vector<int>rightrotate(vector<int>arr,int k){

     reverse(arr.begin(),arr.end());
     reverse(arr.begin(),arr.begin()+k);
     reverse(arr.begin()+k,arr.end());

     return arr;
}

int main() {
    vector<int>arr = {1,2,3,4,5};
    int k =2;
    // vector<int> arr2 = leftrotate(arr,k);
    // for(auto val: arr2){
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    vector<int>arr3 = rightrotate(arr,k);
    for(auto val: arr3){
        cout<<val<<" ";
    }
    cout<<endl;

    
    return 0;
}