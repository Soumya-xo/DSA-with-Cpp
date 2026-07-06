#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s = "Take you forward";
    string result="";

    for(char ch : s){
        char lower = tolower(ch);

        if(lower==' ' || lower=='\n' || lower=='\t'){
            continue;
        }else{
            result+=ch;
        }
    }
    cout<<result<<endl;

    return 0;
}