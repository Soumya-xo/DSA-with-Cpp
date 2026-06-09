#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    map<string,int> m;
    m["tv"]=100;
    m["tablet"]=100;
    m["phone"]=50;
    m["headphone"]=120;

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    return 0;
}