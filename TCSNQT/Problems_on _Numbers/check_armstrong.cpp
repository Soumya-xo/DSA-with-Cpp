#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void checkArmstrong(int num){
    int sum =0;
    int rev;
    int check = num;

    while(check>0){
        int rem = check%10;
        sum +=rem*rem*rem;
        check /=10;
    }

    if(sum==num){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}
int main() {
    int num = 143;
    checkArmstrong(num);
    return 0;
}