//TC = o(nlogn)
//Sc = o(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> rearrangeArray(vector<int>&arr){
    sort(arr.begin(),arr.end());
    reverse(arr.begin()+arr.size()/2,arr.end());
    return arr;

}

int main() {
    vector<int> arr = {8,7,5,3,4,2};
    rearrangeArray(arr);
    for(auto val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}