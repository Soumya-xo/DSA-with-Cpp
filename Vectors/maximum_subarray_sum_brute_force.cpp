
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec={3,-4,5,4,-1,7,-8};
    int maxSum= INT_MIN;
    for(int st=0;st<vec.size();st++){
        int sum=0;
        for(int end=st;end<vec.size();end++){
             sum+=vec[end]; 
             maxSum=max(sum,maxSum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
}