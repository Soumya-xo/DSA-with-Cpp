#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    return gcd(max(a,b)-min(a,b),min(a,b));
}

int main() {
    int a = 4;
    int b =8;
    float lcm = a*b/gcd(a,b);
    cout<<lcm<<endl;
    return 0;
}