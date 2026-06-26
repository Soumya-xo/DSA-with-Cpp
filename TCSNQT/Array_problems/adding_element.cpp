#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>arr = {1,2,3,5,6};
    arr.push_back(9);
    arr.insert(arr.begin(),8);
    arr.insert(arr.begin()+3,7);

    for(auto val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}