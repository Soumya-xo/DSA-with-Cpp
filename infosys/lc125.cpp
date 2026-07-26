#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s = "A man, a plan, a canal: Panama";

    string clean = "";
    for(auto ch : s){
        if(isalnum(ch)){
            clean+=tolower(ch);
        }
    }

    int left =0;
    int right = clean.size()-1;

    while(left<right){
        if(clean[left]!=clean[right]){
            cout<<"false";
            return 0;
        }
        left++;
        right--;
    }
    cout<<"true";
    return 0;
}