#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s = "123xyz4";
    string result="";
    int sum =0;
    for(int i =0;i<s.size();i++){
        if(isdigit(s[i])){
           result+=s[i];
        }else{
            if(!result.empty()){
                sum += stoi(result);
                result="";
            }
        }
    }
    if(!result.empty()){
        sum+=stoi(result);
    }
    cout<<sum;
    return 0;
}