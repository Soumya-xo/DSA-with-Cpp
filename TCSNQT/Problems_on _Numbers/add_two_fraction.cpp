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

int lcm(int a,int b){
    return a*b/gcd(a,b);
}

int main() {
    int n1 ;
    cin>>n1;
    int d1 = 4;
    int n2 =1;
    int d2 = 7;

    int denominator = lcm(d1,d2);
    int nominator = denominator/d1*n1 + denominator/d2*n2;

    cout<<"denominator : "<<denominator<<endl;
    cout<<"nominator : "<<nominator<<endl;
    return 0;
}