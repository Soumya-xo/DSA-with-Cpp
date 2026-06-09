
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec={3,-4,5,4,-1,7,-8};
    int currSum=0;
    int maxSum=INT_MIN;
    for(int var: vec){
        currSum+=var;
        maxSum=max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<maxSum<<endl;
    return 0;
}