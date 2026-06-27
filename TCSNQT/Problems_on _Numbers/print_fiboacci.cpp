#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int fibonacci(int n){
    if(n==1 || n == 2){
       return 1;
    }
    int prev=fibonacci(n-1);
    int secprev = fibonacci(n-2);

    return prev+secprev;
}

vector<int>arr(int num){
    vector<int> ans;
    ans.push_back(0);
    for(int i =1;i<=num;i++){
        ans.push_back(fibonacci(i));
    }
    return ans;
}

int main() {
    int num = 6;
    vector<int>ans = arr(num);
    for(auto val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}