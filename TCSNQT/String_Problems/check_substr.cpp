#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

int main() {
    string s ;
    getline(cin,s);
    string x;
    cin>>x;

    size_t pos = s.find(x);
    // cout<<pos<<endl;
    if(pos!=string::npos){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}