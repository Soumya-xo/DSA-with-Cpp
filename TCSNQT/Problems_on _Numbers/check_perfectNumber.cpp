#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void checkPerfectNumber(int num){

    int sum =0;
    for(int i = 1;i<num;i++){
       if(num%i==0){
        sum+=i;
       }
    }

    if(sum==num){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}

int main() {
    int num = 8;
    checkPerfectNumber(num);
    return 0;
}