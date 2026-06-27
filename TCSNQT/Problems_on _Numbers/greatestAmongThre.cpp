#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a = 4;
    int b = 5;
    int c = 3;

    if(a>b && a>c){
        cout<<"a"<<endl;
    }else if(b>a && b>c){
        cout<<"b"<<endl;
    }else{
        cout<<"c"<<endl;
    }
    return 0;
}