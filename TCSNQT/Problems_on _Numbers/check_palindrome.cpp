#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void checkPalindrome(int num){
    int reverse = 0;
    int n = num;
    while(n>0){
        int remainder = n%10;
        reverse = (reverse*10)+ remainder;
        n = n/10;
    }
    
    if(reverse==num){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
}

int main() {
    int n = 45545;
checkPalindrome(n);
    return 0;
}