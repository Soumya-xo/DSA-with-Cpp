#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;

int main() {
    vector<int>arr = {1,2,3};

    unordered_set<int>st;

    for(auto val:arr){
        if(st.find(val)!=st.end()){
            cout<<true<<endl;
        }
        st.insert(val);
    }
    cout<<false<<endl;
    return 0;
}