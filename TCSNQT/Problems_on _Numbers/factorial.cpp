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
    int num = 5;
    cout<<fact(num)<<endl;
    return 0;
}