#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findEquilibrium(vector<int>&arr){
    int sum =0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    int rightSum = sum;
    int leftSum = 0;
    for(int i =0;i<arr.size();i++){
        rightSum-=arr[i];
        if(leftSum==rightSum){
            return i;
            break;
        }
        leftSum+=arr[i];
    }
    return -1;
}

int main() {
    vector<int> arr = {2,3,-1,8,4};
    cout<<findEquilibrium(arr)<<endl;

    return 0;
}