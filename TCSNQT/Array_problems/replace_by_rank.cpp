//optimal
//Tc = o(nlogn)
//Sc = o(n)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>arr = {20,15,26,2,98,6};
    vector<int>sortedArr = arr;
    unordered_map<int,int> mp;
    int rank =1;
    sort(sortedArr.begin(),sortedArr.end());
    for(auto val : sortedArr){
        if(mp.find(val)==mp.end()){      //it means it check if val not in mp or not (if not then it will execute otherwise rank wil be same (no increment))
           mp[val] = rank;
        rank++;
        }
    }
    vector<int>ans;

    for(auto val : arr){
        ans.push_back(mp[val]);
    }

    for(auto val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}