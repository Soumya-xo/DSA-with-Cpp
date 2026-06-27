#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkAutomorphic(int num){

    int mul = num*num;
    while (num>0){
        if(num%10 != mul%10){
            return false;
        }
        num/=10;
        mul/=10;
    }
    return true;
}

int main() {
    int num = 76;
    cout<<checkAutomorphic(num)<<endl;

    return 0;
}