#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkLeap(int year){
    if(year%4==0){
        return true;
    }
    if(year%100==0){
        return false;
    }
    if(year%400==0){
        return true;
    }
    return false;
}

int main() {
    int year =  2001;
    bool ans = checkLeap(year);
    cout<<ans;
    return 0;
}