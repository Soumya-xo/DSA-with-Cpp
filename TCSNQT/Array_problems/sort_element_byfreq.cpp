//optimal
//Tc = o(nlogn)
//SC = o(n)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>newArr(vector<int>&arr){
    vector<int> ans;
    unordered_map<int,int> freq;
    for(auto val: arr){
        freq[val]++;
    }

    sort(arr.begin(),arr.end(), [&](int a,int b){
     
    if(freq[a]==freq[b]){
       return a>b;
    }
    return freq[a]>freq[b];
    });

    return arr;
}

int main() {
    vector<int> arr = {1,2,3,2,4,3,1,2};
    vector<int> ans = newArr(arr);
    for(auto val : ans){
        cout<< val<< " ";
    }
    cout<<endl;

    return 0;
}