#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num = 345;

    int decimal = 0;
    int base = 1;

    while(num>0){
        int rem = num%10;
        decimal += rem*base;
        base *= 8;
        num/=10;
    }

    int binary =0;
    int base2 =1;

    while(decimal>0){
        int rem = decimal%2;
        binary += rem*base2;
        base2 *= 10;
        decimal/=2;
    }
    

    cout<<binary<<endl;
    return 0;
}