#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int check = 379;
    int sum =0;
    int num = check;
    
    while(num>0){
        int rem = num%10;
        sum += rem;
        num/=10;
    }

    if(check%sum==0){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}