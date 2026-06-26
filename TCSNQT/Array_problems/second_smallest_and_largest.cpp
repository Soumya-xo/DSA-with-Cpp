//brute force
//TC = o(nlogn)
//SC = o(1)

// #include<iostream>
// #include<vector>
// using namespace std;

// void getElement(vector<int> &arr){
//     sort(arr.begin(),arr.end());
//     cout<<"second smallest is : "<<arr[1]<<endl;
//     cout<<"second largest is : "<< arr[arr.size()-2]<<endl;
// }

// int main(){
//     vector<int> arr = {12,3,4,5,6,7,3};
//     getElement(arr);
//     return 0;
// }



//better approach
//TC = o(n)
//SC = o(1)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void getElement(vector<int> &arr){
//     int small = INT_MAX;
//     int secondSmall = INT_MAX;
//     int large = INT_MIN;
//     int secondLarge = INT_MIN;

//     for(int i=0;i<arr.size();i++){
//         small = min(small,arr[i]);
//         large = max(large,arr[i]);
//     }
    
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]!=small){
//         secondSmall= min(secondSmall,arr[i]);
//         }
//         if(arr[i]!=large){
//         secondLarge = max(secondLarge,arr[i]);
//         }
//     }
//     cout<<"second smallest : "<<secondSmall<<endl;
//     cout<<"second largest : "<<secondLarge<<endl;

    
// }

// int main() {
//     vector<int> arr = {12,3,4,5,6,7,8,34};
//     getElement(arr);

//     return 0;
// }



//optimal
//TC = o(n)
// SC = o(1)


#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void getElement(vector<int>& arr) {
    //  edge case
    if (arr.size() < 2) {
        cout << -1 << endl;
        return;
    }

    int small = INT_MAX, secondSmall = INT_MAX;
    int large = INT_MIN, secondLarge = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < small) {
            secondSmall = small;
            small = arr[i];
        }
        else if (arr[i] < secondSmall && arr[i] != small) {
            secondSmall = arr[i];
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > large) {
            secondLarge = large;
            large = arr[i];
        }
        else if (arr[i] > secondLarge && arr[i] != large) {
            secondLarge = arr[i];
        }
    }

    cout << "Second Smallest : " << secondSmall << endl;
    cout << "Second Largest  : " << secondLarge << endl;
}

int main() {
    vector<int> arr = {1};

    getElement(arr);

    return 0;
}