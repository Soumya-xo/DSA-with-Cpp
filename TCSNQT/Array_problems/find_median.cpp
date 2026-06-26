#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findMedian(vector<int>&arr){
    sort(arr.begin(),arr.end());
    double median;
    if(arr.size()%2 !=0){
        median = arr[arr.size()/2];
    }else{
        median = (arr[arr.size()/2] + arr[(arr.size()/2)-1])/2.0 ;
    }
    return median;
}

int main() {
    vector<int>arr = {1,2,3,4,5,6,7,8};
    cout<<findMedian(arr)<<endl;
    return 0;
}