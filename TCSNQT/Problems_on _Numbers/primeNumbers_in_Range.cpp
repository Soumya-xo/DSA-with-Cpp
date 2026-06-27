#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool checkPrime(int num){
    
    if(num == 2){
        return true;
    }else{
        for(int i =2; i<num;i++){
            if(num%i==0){
            return false;
            break;
            }
        }
    }
    return true;
}

vector<int>arr(int a , int b){
    vector<int>ans;

    for(int i = a;i<b;i++){
        if(checkPrime(i)==true){
            ans.push_back(i);
        }
    }
    return ans;
}

int main() {
    int a = 2;
    int b = 10;
    vector<int>ans = arr(a,b);
    for(auto val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}