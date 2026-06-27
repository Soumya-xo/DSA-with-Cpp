#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkPalindrome(int num){
     int check = num;
     int rev = 0;
     
     while(check>0){
        int rem = check%10;
        rev = (rev*10) + rem;
        check = check/10;
     }
     
     if(rev == num){
        return true;
     }
     return false;
}

vector<int>arr(int Min, int Max){
    vector<int>ans;
    for(int i =Min; i<Max; i++){
        if(checkPalindrome(i)==true){
            ans.push_back(i);  
        }
    }
    return ans;
}

int main() {
    int Min = 100;
    int Max = 150;
    vector<int>ans=arr(Min,Max);
   
    for(auto val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}