#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double average(vector<int>&arr){
    int sum =0;
    for(int i=0; i<arr.size();i++){
        sum+=arr[i];
    }
    return (double)sum/arr.size();
}

int main() {
    vector<int>arr = {1,2,3,4,5,5};
    cout<<average(arr)<<endl;
    return 0;
}