#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s= "Take You Forward";
    for(int i=0;i<s.size();i++){
        int ascii = (int)s[i];

        if(ascii>=65 && ascii<=90){
            s[i]=tolower(s[i]);
        }else if (ascii>=97 && ascii<=122){
            s[i]=toupper(s[i]);
        }
    }

    cout<<s<<endl;
    return 0;
}