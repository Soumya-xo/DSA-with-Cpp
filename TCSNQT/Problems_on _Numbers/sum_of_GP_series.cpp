#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a = 1;
    float r = 0.5;
    int n = 3;
    float sum = a*(pow(r,n)-1)/(r-1);
    cout<<sum<<endl;
    return 0;
}