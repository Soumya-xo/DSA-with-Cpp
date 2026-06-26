//optimal
//TC = o(nlogn)
//SC = 0(1)

// #include<iostream>
// using namespace std;

// int findLargest(vector<int>&arr, int n){
//     sort(arr.begin(),arr.end());
//     return arr[n-1];
// }

// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     int n = 5;
//     cout<<findLargest(arr,n)<<endl;
// }



//optimal
// TC = o(n)
// SC = o(1)

#include<iostream>
#include<vector>
using namespace std;

int findLargest(vector<int>arr){
    int largest = arr[0];
    for(int i=1;i<arr.size();i++){
        if(largest<arr[i]){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    vector<int> arr= {1,2,3,4,5,6};
    cout<<findLargest(arr)<<endl;
    return 0;
}

