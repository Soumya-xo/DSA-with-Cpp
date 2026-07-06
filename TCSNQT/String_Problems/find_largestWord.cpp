#include <iostream>
#include <vector>
#include <algorithm>
#include<sstream>
using namespace std;

int main() {
    string str = "google doc";
    stringstream ss(str);
    string word;
    int count;
    int maxCount=0;
    string maxWord = "";
    while(ss>>word){
       count=word.size();
       if(count>maxCount){
       maxCount=count;
       maxWord=word;
       }
    }
    cout<<maxWord<<endl;
    return 0;
}