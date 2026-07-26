#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>nums = {1,2,3,4,5,6,7};
    int k =3;

    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());

    for(auto val : nums){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}