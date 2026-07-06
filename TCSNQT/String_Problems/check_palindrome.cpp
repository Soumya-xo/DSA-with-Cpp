#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void check_palindrome(string s){
    int st = 0;
    int end = s.size()-1;

    while(st<end){
        if(s[st]!=s[end]){
            cout<<"False";
            return;
        }
        st++;
        end--;
    }
    cout<<"true";
}

int main() {
    string s = "ABCDCBAA";
    check_palindrome(s);
    return 0;
}