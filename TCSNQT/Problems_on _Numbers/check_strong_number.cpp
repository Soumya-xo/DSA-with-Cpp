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

void checkStrong(int num){
    int sum =0;
    int n = num;

    while(n>0){
        int rem = n%10;
        sum += fact(rem);
        n /=10;

    }

    if(sum==num){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;

    }
}

int main() {
    int num = 26;
    checkStrong(num);

    return 0;
}