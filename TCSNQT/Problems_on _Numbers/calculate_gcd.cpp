//Tc = o(log(min(a,b)))
//SC = o(1)

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
    int a = 5;
    int b =10;

    cout<<gcd(a,b)<<endl;
    return 0;
}