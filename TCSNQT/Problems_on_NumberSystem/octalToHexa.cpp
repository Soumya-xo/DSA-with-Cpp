#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int octal = 62;
    int decimal = 0;
    int base = 1;

    while(octal>0){
       int rem = octal%10;
       decimal += rem*base;
       base *=8;
       octal/=10;
    }

    cout<< hex << uppercase << decimal;
    return 0;
}