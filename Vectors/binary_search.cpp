// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int binarySearch(vector<int> arr, int tar){
//     int st=0;
//     int end=arr.size()-1;
//     while(st<=end){
//         int mid=st + (end-st)/2;
//         if(tar<arr[mid]){
//             end=mid-1;
//         }
//         else if(tar>arr[mid]){
//             st=mid+1;
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;//if it does not satisfy all the conditions like in case number is not in the array
// }

// int main() {
//     vector<int> arr={-1,0,3,4,5,9,12,13};
//     int target=12;
//     cout<<"target is at index:"<<binarySearch(arr,target)<<endl;

//     return 0;
// }




// Binary Search using recursion
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int bsUsingRecursion(vector<int> arr, int target, int st, int end){
    if(st <= end){
        int mid = st + (end - st) / 2;

        if(target < arr[mid]){
            return bsUsingRecursion(arr, target, st, mid - 1);
        }
        else if(target > arr[mid]){
            return bsUsingRecursion(arr, target, mid + 1, end);
        }
        else{
            return mid;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {-1,0,3,4,5,9,12,13};
    int target = 12;

    cout << bsUsingRecursion(arr, target, 0, arr.size() - 1)<<endl;

    return 0;
}