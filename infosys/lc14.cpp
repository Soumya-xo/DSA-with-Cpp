#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string>strs = {"flower","flow","flight"};

    string prefix = strs[0];
    for(int i =1;i<strs.size();i++){
        while(strs[i].find(prefix)!=0){
            prefix.pop_back();
        }
        if(prefix.empty()){
            cout<<"no";
            return 0;
        }
    }
    cout<<prefix<<endl;
    return 0;
}