#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkPrime(int num){
    if(num<=1){
        return false;
    }
    else if (num==2){
        return true;
    }else{
        for(int i=2;i<num;i++){
            if(num%i == 0){
                return false;
            }
        }
        return true;
    }

}

vector<int>arr(int num){
    vector<int>ans;

    for(int i=1;i<=num;i++){

        if(checkPrime(i)==true && num%i==0){
            ans.push_back(i);
        }
    }
    return ans;
}

int main() {
    int num = 35;
    vector<int>ans = arr(num);
    for(auto val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
    
    return 0;
}