#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string sent;
    getline(cin,sent);
    int i = sent.size()-1;
    string result="";

    while(i>=0){
        while(i>=0 && sent[i]==' '){
            i--;
        }
        if(i<0){
            break;
        }
        int end =i;
        
        while(i>=0 && sent[i]!=' '){
            i--;
        }
        string word = sent.substr(i+1,end-i);
        
        if(!result.empty()){
            result+=" ";
        }
        result+=word;

    }
    cout<<result<<endl;
    return 0;
}