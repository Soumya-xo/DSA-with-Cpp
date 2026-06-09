#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // pair<int,int> p = {1,2};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;


    // pair<char,int> p2 = {'a',3};
    // pair<int,pair<char,int>> p3 = {1,{'a',2}};
    // cout<<p3.first<<endl;
    // cout<<p3.second.first<<endl;
    // cout<<p3.second.second<<endl;


    vector<pair<int,int>> vec = {{1,2},{3,4},{5,6}};
    vec.push_back({7,8});
    for(auto p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

       
    return 0;
}