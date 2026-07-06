#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s = "Take you forward";
    string result="";

    for(char ch : s){
        char lower = tolower(ch);

        if(lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u'){
            continue;
        }else{
            result+=ch;
        }
    }
    cout<<result<<endl;

    return 0;
}