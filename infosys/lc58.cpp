#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s = "Hello World";

    int i = s.size()-1;
    int count = 0;
    while(i>=0 && s[i]==' '){
         i--;
    }
     while(i>=0 && s[i]!=' '){
        count++;
         i--;
    }
    cout<<count<<endl;
    return 0;
}