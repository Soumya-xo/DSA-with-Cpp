#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num = 2746;
    int Max = 0;
    int Min = 9;
    while(num>0){
         int rem = num%10;
         Max = max(rem,Max);
         Min = min(rem,Min);
         num = num/10;
    }
    cout<<"max : "<<Max<<endl;
    cout<<"min : "<<Min<<endl;
    return 0;
}