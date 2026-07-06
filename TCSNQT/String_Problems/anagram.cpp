#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    string p;
    cin>>s;
    cin>>p;

    sort(s.begin(),s.end());
    sort(p.begin(),p.end());

    if(s==p){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}