#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string ans(string s){
    string ans= "";
    for(char ch : s){
        int x ;
        if(ch=='Z'){
          x=65;  
        }else if(ch=='z'){
            x=97;
        }else{
            x=ch+1;
        }
        ans+=char(x);
    }
    return ans;
}

int main() {
    string s = "abcdez";
    string answer = ans(s);
    cout<<answer<<endl;
    return 0;
}