#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int fact(int num){
    if(num==0 || num==1){
        return 1;
    }
    return num*fact(num-1);
}

int main() {
    int n =6;
    int r =4;

    cout<<fact(n)/fact(n-r)<<endl;
    return 0;
}